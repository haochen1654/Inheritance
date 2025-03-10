load("@rules_cc//cc:cc_binary.bzl", "cc_binary")
load("@rules_cc//cc:cc_library.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "game_charactor",
    hdrs = ["game_charactor.h"],
)

cc_binary(
    name = "inheritance_main",
    srcs = ["main.cpp"],
      deps = ["//:game_charactor"],
)
