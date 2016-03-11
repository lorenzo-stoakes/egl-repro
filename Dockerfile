FROM resin/raspberrypi2-debian
RUN apt-get update -y; \
    apt-get install -y \
    build-essential \
    libgles2-mesa-dev \
    libraspberrypi-dev
COPY repro.c hello_triangle.bin /usr/src/app/
WORKDIR /usr/src/app/
RUN make repro
CMD ./repro
