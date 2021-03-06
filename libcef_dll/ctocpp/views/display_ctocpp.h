// Copyright (c) 2018 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=a5f8f9c02783327a1fab710ee6b16a8196dc55de$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_VIEWS_DISPLAY_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_VIEWS_DISPLAY_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/views/cef_display_capi.h"
#include "include/views/cef_display.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefDisplayCToCpp
    : public CefCToCppRefCounted<CefDisplayCToCpp, CefDisplay, cef_display_t> {
 public:
  CefDisplayCToCpp();

  // CefDisplay methods.
  int64 GetID() OVERRIDE;
  float GetDeviceScaleFactor() OVERRIDE;
  void ConvertPointToPixels(CefPoint& point) OVERRIDE;
  void ConvertPointFromPixels(CefPoint& point) OVERRIDE;
  CefRect GetBounds() OVERRIDE;
  CefRect GetWorkArea() OVERRIDE;
  int GetRotation() OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_VIEWS_DISPLAY_CTOCPP_H_
