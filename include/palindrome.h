//===============================================================================
//
// Header for palindrome declarations
//
// (C) 2023 Allan Knight - All rights reserved
//
//===============================================================================

#ifndef __PALINDROME_H__
#define __PALINDROME_H__

#include <string>

namespace utils { 
  namespace recursive {
    bool is_palindrome(const std::string &str);
  }

  namespace iterative {
    bool is_palindrome(const std::string &str);
  }

  namespace algorithmic {
    bool is_palindrome(const std::string &str);
  }
}
#endif // __PALINDROME_H__
