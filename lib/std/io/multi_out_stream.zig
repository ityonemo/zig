// SPDX-License-Identifier: MIT
// Copyright (c) 2015-2020 Zig Contributors
// This file is part of [zig](https://ziglang.org/), which is MIT licensed.
// The MIT license requires this copyright notice to be included in all copies
// and substantial portions of the software.
/// Deprecated: use `std.io.multi_writer.MultiWriter`
pub const MultiOutStream = @import("./multi_writer.zig").MultiWriter;

/// Deprecated: use `std.io.multi_writer.multiWriter`
pub const multiOutStream = @import("./multi_writer.zig").multiWriter;
