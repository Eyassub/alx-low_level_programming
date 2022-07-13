#!/bin/bash
wget -P /tmp https://github.com/Eyassub/alx-low_level_programming/0x18-dynamic_libraries/libmask.so
LD_PRELOAD=$PWD/libmask.so
