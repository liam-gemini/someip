package(default_visibility = ["//visibility:public"])
load("@rules_proto//proto:defs.bzl", "proto_library")

proto_library(
    name = "all_protos",
    srcs = glob(["*/*.proto","*.proto"]),
    #deps = ["//sr_service/proto/sr1_0:overall_proto_lib"],
)

cc_proto_library(
    name = "sd_proto",
    deps = [":all_protos"],
)
