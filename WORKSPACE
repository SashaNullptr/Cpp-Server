workspace(name = "cpp_server")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "io_bazel_rules_docker",
    sha256 = "9ff889216e28c918811b77999257d4ac001c26c1f7c7fb17a79bc28abf74182e",
    strip_prefix = "rules_docker-0.10.1",
    urls = ["https://github.com/bazelbuild/rules_docker/releases/download/v0.10.1/rules_docker-v0.10.1.tar.gz"],
)

load(
    "@io_bazel_rules_docker//repositories:repositories.bzl",
    container_repositories = "repositories",
)

container_repositories()

load(
    "@io_bazel_rules_docker//cc:image.bzl",
    cc_image_repos = "repositories",
)

cc_image_repos()

load("@io_bazel_rules_docker//repositories:deps.bzl", container_deps = "deps")

container_deps()

load(
    "@io_bazel_rules_docker//container:container.bzl",
    "container_pull",
)

container_pull(
    name = "cc_base_image",
    digest = "sha256:32c93ea6e867f4deee92912656c77f78f50e6e3d031dbfd85270dd30d75ed1ff",  # 14 October 2019 at 08:21:02 UTC-7
    registry = "gcr.io",
    repository = "distroless/cc-debian10",
)

container_pull(
    name = "gcc_base_image",
    digest = "sha256:bec6098cff5601e7b482febae74cc9508f2ba415ea2604af095ecc1a2b65c66b",  # 7.4
    registry = "index.docker.io",
    repository = "library/gcc",
)

load("@bazel_tools//tools/build_defs/repo:git.bzl", "new_git_repository")

# Pistache HTTP server
new_git_repository(
    name = "pistache",
    build_file_content = """
cc_library(
    name = "pistache_lib",
    srcs = glob(["src/**/*.cc"]),
    hdrs = glob(["include/pistache/**/*.h"]),
    includes = ["include/"],
    visibility = ["//visibility:public"]
)""",
    commit = "e18ed9baeb2145af6f9ea41246cf48054ffd9907",
    init_submodules = 1,
    remote = "https://github.com/oktal/pistache",
)
