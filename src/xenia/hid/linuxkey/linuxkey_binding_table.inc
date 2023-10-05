/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2022 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 */

// This is a partial file designed to be included by other files when
// constructing various tables.

// clang-format off
XE_HID_LINUXKEY_BINDING(DpadLeft,    "DPAD_LEFT"          , keybind_dpad_left        , "^A"  )
XE_HID_LINUXKEY_BINDING(DpadRight,   "DPAD_RIGHT"         , keybind_dpad_right       , "^D"  )
XE_HID_LINUXKEY_BINDING(DpadDown,    "DPAD_DOWN"          , keybind_dpad_down        , "^S"  )
XE_HID_LINUXKEY_BINDING(DpadUp,      "DPAD_UP"            , keybind_dpad_up          , "^W"  )
XE_HID_LINUXKEY_BINDING(LThumbLeft,  "LEFT_THUMB_LEFT"    , keybind_left_thumb_left  , "_A"  )
XE_HID_LINUXKEY_BINDING(LThumbRight, "LEFT_THUMB_RIGHT"   , keybind_left_thumb_right , "_D"  )
XE_HID_LINUXKEY_BINDING(LThumbDown,  "LEFT_THUMB_DOWN"    , keybind_left_thumb_down  , "_S"  )
XE_HID_LINUXKEY_BINDING(LThumbUp,    "LEFT_THUMB_UP"      , keybind_left_thumb_up    , "_W"  )
XE_HID_LINUXKEY_BINDING(LThumbPress, "LEFT_THUMB_PRESSED" , keybind_left_thumb       , "F"   )
XE_HID_LINUXKEY_BINDING(RThumbUp,    "RIGHT_THUMB_UP"     , keybind_right_thumb_up   , "0x26")
XE_HID_LINUXKEY_BINDING(RThumbDown,  "RIGHT_THUMB_DOWN"   , keybind_right_thumb_down , "0x28")
XE_HID_LINUXKEY_BINDING(RThumbRight, "RIGHT_THUMB_RIGHT"  , keybind_right_thumb_right, "0x27")
XE_HID_LINUXKEY_BINDING(RThumbLeft,  "RIGHT_THUMB_LEFT"   , keybind_right_thumb_left , "0x25")
XE_HID_LINUXKEY_BINDING(RThumbPress, "RIGHT_THUMB_PRESSED", keybind_right_thumb      , "K"   )
XE_HID_LINUXKEY_BINDING(X,           "X"                  , keybind_x                , "L"   )
XE_HID_LINUXKEY_BINDING(B,           "B"                  , keybind_b                , "0xDE")
XE_HID_LINUXKEY_BINDING(A,           "A"                  , keybind_a                , "0xBA")
XE_HID_LINUXKEY_BINDING(Y,           "Y"                  , keybind_y                , "P"   )
XE_HID_LINUXKEY_BINDING(LTrigger,    "LEFT_TRIGGER"       , keybind_left_trigger     , "Q I" )
XE_HID_LINUXKEY_BINDING(RTrigger,    "RIGHT_TRIGGER"      , keybind_right_trigger    , "E O" )
XE_HID_LINUXKEY_BINDING(Back,        "BACK"               , keybind_back             , "Z"   )
XE_HID_LINUXKEY_BINDING(Start,       "START"              , keybind_start            , "X"   )
XE_HID_LINUXKEY_BINDING(LShoulder,   "LEFT_SHOULDER"      , keybind_left_shoulder    , "1"   )
XE_HID_LINUXKEY_BINDING(RShoulder,   "RIGHT_SHOULDER"     , keybind_right_shoulder   , "3"   )
// clang-format on
