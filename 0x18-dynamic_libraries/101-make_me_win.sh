#!/bin/bash
wget -q --output-document=$PWD/101-make_me_win.so https://github.com/Mwembe-Tsuma/alx-low_level_programming/raw/main/0x18-dynamic_libraries/101-make_me_win.so
export LD_PRELOAD=$PWD/101-make_me_win.so
