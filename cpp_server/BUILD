package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "server",
    srcs = ["main.cc"],
    deps = ["//cpp_server/endpoint:endpoint_lib"],
)

filegroup(
    name = "srcs",
    srcs = ["BUILD"] + glob(["*.cc"]),
)
