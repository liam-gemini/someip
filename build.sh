#！/bin/bash

# Define variables for build and output directories
BUILD_DIR="build"
BINARY_DIR="bin"

# Function to clean the build directory
clean() {
    echo "Cleaning build directory..."
    if [ -d "$BUILD_DIR" ]; then
        rm -rf "$BUILD_DIR"
        echo "Build directory cleaned."
    else
        echo "No build directory to clean."
    fi
    echo "Cleaning build directory..."
    if [ -d "$BINARY_DIR" ]; then
        rm -rf "$BINARY_DIR"
        echo "Binary directory cleaned."
    else
        echo "No binary directory to clean."
    fi
}

# Parse command-line arguments
case "$1" in
    clean)
        clean
        ;;
esac

mkdir -p $BUILD_DIR
cd $BUILD_DIR
cmake ..
make -j128