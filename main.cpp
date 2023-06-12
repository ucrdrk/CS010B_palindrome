#include <cstdlib>
#include <iostream>
#include <string>

#include <palindrome.h>

int main(int argc, char *argv[]) {
  std::string str{"o"};
  std::cout << str << " is " << (utils::recursive::is_palindrome(str) ? "" : "not ") << "a palindrome" << std::endl;   
  std::cout << str << " is " << (utils::iterative::is_palindrome(str) ? "" : "not ") << "a palindrome" << std::endl;   
  std::cout << str << " is " << (utils::algorithmic::is_palindrome(str) ? "" : "not ") << "a palindrome" << std::endl;   
  return EXIT_SUCCESS;
}