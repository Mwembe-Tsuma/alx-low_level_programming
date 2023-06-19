#!/bin/bash
wget -q --output-document=$HOME/101-make_me_win.so https://github.com/Mwembe-Tsuma/alx-low_level_programming/0x18-dynamic_libraries/101-make_me_win.so
export LD_PRELOAD=$HOME/101-make_me_win.so
