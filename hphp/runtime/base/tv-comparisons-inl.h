/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-present Facebook, Inc. (http://www.facebook.com)  |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

namespace HPHP {

//////////////////////////////////////////////////////////////////////

inline bool tvEqual(Cell cell, int ival) {
  return tvEqual(cell, static_cast<int64_t>(ival));
}

inline bool tvLess(Cell cell, int ival) {
  return tvLess(cell, static_cast<int64_t>(ival));
}

inline bool tvGreater(Cell cell, int ival) {
  return tvGreater(cell, static_cast<int64_t>(ival));
}

//////////////////////////////////////////////////////////////////////

}
