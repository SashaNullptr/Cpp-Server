package(default_visibility = ["//visibility:public"])

cc_library(
    name = "endpoint_lib",
    srcs = ["endpoint.cc"],
    deps = [
        "@pistache//:pistache_lib",
    ],
)

filegroup(
    name = "srcs",
    srcs = ["BUILD"] + glob(["*.cc"]),
)
