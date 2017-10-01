FROM fedora:26

WORKDIR /root

ADD . /root

RUN dnf install -y gcc gcc-c++ ninja-build meson

ENTRYPOINT ["./build.sh"]