#!/bin/bash
wget -O "$HOME"/lib101-makemewin.so https://github.com/Charles2k/alx-low_level_programming/0x18-dynamic_libraries/lib101-makemewin.so
export LD_PRELOAD="$HOME"/lib101-makemewin.so
