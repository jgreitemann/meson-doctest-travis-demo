#!/bin/sh

cd /project
meson build
cd build
ninja
ninja test
