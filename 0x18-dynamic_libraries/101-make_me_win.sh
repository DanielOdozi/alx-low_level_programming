#!/bin/bash
wget -q --output-document=$HOME/l01-make_me_win.so https://github.com/DanielOdozi/alx-low_level_programming/blob/master/0x18-dynamic_libraries/l01-make_me_win.so
export LD_PRELOAD=$HOME/l01-make_me_win.so