#!/bin/bash
wget -P /tmp https://https://github.com/WanLoq/alx-low_level_programming/tree/main/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD=/tmp/libmask.so
