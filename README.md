# entity

Automatic properties entity library for c++11

## Purpose

This is a Qt library to do black magic in order to avoid class user to do
manual properties on classes.

## Prerequisites

You can build your self, in this case you need:

* cmake
* Qt

If you have docker, you're done.

## Build & run tests

### Manual way

```bash
mkdir build
cd build
cmake ..
make -j
GTEST_COLOR=1 ./tests/test-entity
```

### Docker way

Just run this to build & run tests:

```bash
./build.sh
```

This will use docker image
[docker-qt-builder](https://hub.docker.com/r/ociotec/docker-qt-builder/) ([GitHub](https://github.com/ociotec/docker-qt-builder))
as builder.
