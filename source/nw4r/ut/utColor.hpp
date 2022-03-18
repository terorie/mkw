// Source:
// https://github.com/doldecomp/ogws/blob/82dbeac2267170fc5cef7e67a6d8c31c5ff45d69/include/nw4r/ut/ut_Color.h
// Decompiled by kiwi515, GibHaltmannKill.

#pragma once

#include <rk_types.h>

#include <rvl/gx/gx.h>

namespace nw4r {
namespace ut {

struct Color : public GXColor {
  Color() { operator=(0xFFFFFFFF); }

  Color(u32 color) { operator=(color); }

  Color(int _r, int _g, int _b, int _a = 0xFF) { Set(_r, _g, _b, _a); }

  inline Color(const Color& other) {
    r = other.r;
    g = other.g;
    b = other.b;
    a = other.a;
  }

  ~Color() {}

  Color& operator=(u32 value) {
    ToU32ref() = value;
    return *this;
  }

  operator u32() const { return ToU32ref(); }

  u32 ToU32() const { return ToU32ref(); }

  void Set(int _r, int _g, int _b, int _a = 0xFF) {
    r = static_cast<u8>(_r);
    g = static_cast<u8>(_g);
    b = static_cast<u8>(_b);
    a = static_cast<u8>(_a);
  }

  void Set(Color other) { operator=(other); }

protected:
  u32& ToU32ref() { return *reinterpret_cast<u32*>(this); }

  const u32& ToU32ref() const { return *reinterpret_cast<const u32*>(this); }
} __attribute__((aligned(4)));

} // namespace ut
} // namespace nw4r
