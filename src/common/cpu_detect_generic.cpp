// Copyright 2014 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#include "cpu_detect.h"
#include "hash.h"

namespace Common {

CPUInfo cpu_info;

CPUInfo::CPUInfo() {
    SetHash64Function();
}

std::string CPUInfo::Summarize() {
    return "Generic";
}

} // namespace Common
