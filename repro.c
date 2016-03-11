#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sched.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

#define FILENAME "./hello_triangle.bin"

static int child_func(void *arg)
{
    printf("child_func(): PID  = %ld\n", (long) getpid());
    printf("child_func(): PPID = %ld\n", (long) getppid());

    execlp(FILENAME, FILENAME, (char *) NULL);
}

#define STACK_SIZE (1024 * 1024)
static char child_stack[STACK_SIZE]; /* Space for child's stack. */

int main(void)
{
    pid_t child_pid;

    child_pid = clone(child_func, child_stack + STACK_SIZE,
		    CLONE_NEWPID | SIGCHLD, NULL);

    printf("PID returned by clone(): %ld\n", (long) child_pid);

    waitpid(child_pid, NULL, 0);
}
