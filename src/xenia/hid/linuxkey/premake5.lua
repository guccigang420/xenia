project_root = "../../../.."
include(project_root.."/tools/build")

group("src")
project("xenia-hid-linuxkey")
  uuid("fd16e19a-6219-4ab7-b95a-7c78523c50c3")
  kind("StaticLib")
  language("C++")
  links({
    "xenia-base",
    "xenia-hid",
    "xenia-ui",
  })
  defines({
  })
  local_platform_files()
