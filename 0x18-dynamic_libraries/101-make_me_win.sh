#!/bin/bash
wget -P /tmp https://github.com/Elisheba12/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libmask.so
LD_PRELOAD=/tmp/libmask.so
