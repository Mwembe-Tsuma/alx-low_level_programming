#!/bin/bash
wget -0 /$PWD/101-make_me_win.so https://github.com/Mwembe-Tsuma/alx-low_level_programming/raw/master/0x18-dynamic_libraries/101-make_me_win.so
export LD_PRELOAD=/$PWD/101-make_me_win.so
