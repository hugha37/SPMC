#pragma once
/*
 *      Copyright (C) 2012-2013 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include <android/input.h>

#include <stdint.h>
#include <string>
#include <vector>

class CAndroidKey
{
public:
  CAndroidKey() {};
 ~CAndroidKey() {};

  bool onKeyboardEvent(AInputEvent *event);

  static void SetHandleKeys(bool enable) { m_handleKeys = enable; }
  static void SetHandleMediaKeys(bool enable) { m_handleMediaKeys = enable; }
  static void SetHandleSearchKeys(bool enable) { m_handleSearchKeys = enable; }
  static void XBMC_Key(uint8_t code, uint16_t key, uint16_t modifiers, uint16_t unicode, bool up);

protected:
  static bool m_handleKeys;
  static bool m_handleMediaKeys;
  static bool m_handleSearchKeys;
};
