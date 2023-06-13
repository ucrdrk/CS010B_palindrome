//===============================================================================
//
// Header for palindrome definitions
// email: aknig007@ucr.edu
// (C) 2023 Allan Knight - All rights reserved
//
//===============================================================================

#include <string>
#include <algorithm>

namespace utils {
  namespace recursive {
    namespace {
      bool is_palindrome(std::string::const_iterator first, std::string::const_iterator last) {
        if(first >= last) return true;
        if(*first != *last) return false; 
        return is_palindrome(++first, --last);
      }
    }
    bool is_palindrome(const std::string &str) {
      return is_palindrome(str.begin(), str.end()-1);
    }
  }

  namespace iterative {
    bool is_palindrome(const std::string &str) {
      auto i = str.begin(), j = str.end()-1;
      for(; i < j && *i == *j; ++i, --j);
      return i >= j;
    }
  }

  namespace algorithmic {
    bool is_palindrome(const std::string &str) {
      return std::mismatch(str.begin(), str.end(), str.rbegin()).first == str.end();
    }
  }
}