package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "bin",
    srcs = ["main.cc"],
    deps = ["//cpp_server/endpoint:endpoint_lib"],
)

load("@io_bazel_rules_docker//cc:image.bzl", "cc_image")

cc_image(
    name = "server",
    base = "@cc_base_image//image",
    binary = ":bin",
)

filegroup(
    name = "srcs",
    srcs = ["BUILD"] + glob(["*.cc"]),
)
