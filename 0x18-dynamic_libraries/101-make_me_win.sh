#!/bin/bash
wget -P /tmp -q "https://github.com/Camaltra/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/libtest.so"
export LD_PRELOAD="/tmp/libtest.so"