// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2020-2021 Intel Corporation. All Rights Reserved.

#pragma once

#include <chrono>

namespace RealSenseID
{
namespace CommonValues
{
#if RSID_DEBUG_VALUES
constexpr std::chrono::milliseconds enroll_max_timeout {20000};
constexpr std::chrono::milliseconds auth_max_timeout {20000};
#else
constexpr std::chrono::milliseconds enroll_max_timeout {5000};
constexpr std::chrono::milliseconds auth_max_timeout {10000};
#endif
} // namespace Values
} // namespace RealSenseID