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
      auto is_palindrome(std::string::const_iterator first, std::string::const_iterator last) -> bool {
        if(first >= last) { 
          return true;
        }
        if(*first != *last) { 
          return false; 
        }
        return is_palindrome(++first, --last);
      }
    }
    auto is_palindrome(const std::string &str) -> bool{
      return is_palindrome(str.begin(), str.end()-1);
    }
  }

  namespace iterative {
    auto is_palindrome(const std::string &str) -> bool {
      auto first = str.begin();
      auto last = str.end()-1;
      for(; first < last && *first == *last; ++first, --last) {
      }
      return first >= last;
    }
  }

  namespace algorithmic {
    auto is_palindrome(const std::string &str) -> bool {
      return std::mismatch(str.begin(), str.end(), str.rbegin()).first == str.end();
    }
  }
}