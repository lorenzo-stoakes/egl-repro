# EGL Repro

A [resin.io](https://resin.io) project designed to trigger a repro of an
[EGL][EGL] issue on raspberry pi 2.

The issue, reported as [issue #532][issue-firmware] in the
[Raspberry Pi Firmware repo][rpi-firmware] and discussed further in
[PR #1279][pr-kernel] at the [Raspberry Pi kernel fork][rpi-kernel] concerns the
interaction of EGL with [PID namespaces][pid-namespaces] which comes up when
running an EGL application inside a container.


[EGL]:https://en.wikipedia.org/wiki/EGL_(API)
[issue-firmware]:https://github.com/raspberrypi/firmware/issues/532
[rpi-firmware]:https://github.com/raspberrypi/firmware
[pr-kernel]:https://github.com/raspberrypi/linux/pull/1279
[rpi-kernel]:https://github.com/raspberrypi/linux
[pid-namespaces]:http://man7.org/linux/man-pages/man7/pid_namespaces.7.html
