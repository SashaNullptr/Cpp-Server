# C++ HTTP Server Template

## What is this Repo?

A demonstrative project that sets up a [Pistache](http://pistache.io/) server inside a Docker container.

## Prerequisites

This project relies on [Bazel](https://docs.bazel.build/versions/master/install.html) for building and container deployment.


## Building

```shell script
bazel build //...
```

## Running

```shell script
bazel run //cpp_server:server
```