package(default_visibility = ["//visibility:public"])

cc_library(
    name = "rapidjson_lib",
    hdrs = [
        glob("include/rapidjson/**/*.h"),
    ],
)

cc_library(
    name = "pistache_lib",
    srcs = [
        "src/**/*.cc",
    ],
    deps = "rapidjson_lib"
)
