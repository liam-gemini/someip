## Table of Contents
- [Table of Contents](#table-of-contents)
- [Diretory](#diretory)
- [Build](#build)
  - [Build](#build-1)
  - [Clean and build](#clean-and-build)
- [Run](#run)

## Diretory
+ src: source file
+ bin: output binary
+ build: temperory build directory

## Build
### Build
```bash
./build.sh
```
### Clean and build
```bash
./build.sh clean
```
## Run
```bash
env VSOMEIP_CONFIGURATION=/path/to/vsomeip.json VSOMEIP_APPLICATION_NAME=SampleApp ./sample-app
```