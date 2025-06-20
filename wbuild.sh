#!/bin/bash

# Compiler options
CC=em++
CFLAGS="-std=c++17 -Os -Wall"
EMFLAGS="-s USE_GLFW=3 --shell-file shell.html -DPLATFORM_WEB"

# Paths
INCLUDE_DIR="include/"
LIB_DIR="lib"
OUTPUT="index.html"

# Build command
$CC -o $OUTPUT src/main.cpp src/Game/Game.cpp src/Entity/Entity.cpp $LIB_DIR/libraylib.web.a $CFLAGS -I. -I $INCLUDE_DIR -L. -L $LIB_DIR $EMFLAGS