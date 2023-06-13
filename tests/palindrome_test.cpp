#include <gtest/gtest.h>
#include <palindrome.h>

// Demonstrate some basic assertions.
TEST(PalindromeTest, RecursiveTrue) {
  // Expect two strings not to be equal.
  EXPECT_TRUE(utils::recursive::is_palindrome(""));
  EXPECT_TRUE(utils::recursive::is_palindrome("o"));
  EXPECT_TRUE(utils::recursive::is_palindrome("bob"));
  EXPECT_TRUE(utils::recursive::is_palindrome("noon"));
}

TEST(PalindromeTest, RecursiveFalse) {
  // Expect two strings not to be equal.
  EXPECT_FALSE(utils::recursive::is_palindrome("bo"));
  EXPECT_FALSE(utils::recursive::is_palindrome("bom"));
  EXPECT_FALSE(utils::recursive::is_palindrome("boom"));
}

TEST(PalindromeTest, IterativeTrue) {
  // Expect two strings not to be equal.
  EXPECT_TRUE(utils::iterative::is_palindrome(""))     << "Fails on empty string";
  EXPECT_TRUE(utils::iterative::is_palindrome("o"))    << "Fails on \"o\", which is a palindrome";
  EXPECT_TRUE(utils::iterative::is_palindrome("bob"))  << "Fails on \"bob\", which is a palindrome";
  EXPECT_TRUE(utils::iterative::is_palindrome("noon")) << "Fails on \"bob\", which is a palindrome";
}

TEST(PalindromeTest, IterativeFalse) {
  // Expect two strings not to be equal.
  EXPECT_FALSE(utils::iterative::is_palindrome("bo"));
  EXPECT_FALSE(utils::iterative::is_palindrome("bom"));
  EXPECT_FALSE(utils::iterative::is_palindrome("boom"));
}

TEST(PalindromeTest, AlgorithmicTrue) {
  // Expect two strings not to be equal.
  EXPECT_TRUE(utils::algorithmic::is_palindrome(""));
  EXPECT_TRUE(utils::algorithmic::is_palindrome("o"));
  EXPECT_TRUE(utils::algorithmic::is_palindrome("bob"));
  EXPECT_TRUE(utils::algorithmic::is_palindrome("boob"));
}

TEST(PalindromeTest, AlgorithmicFalse) {
  // Expect two strings not to be equal.
  EXPECT_FALSE(utils::algorithmic::is_palindrome("bo"));
  EXPECT_FALSE(utils::algorithmic::is_palindrome("bom"));
  EXPECT_FALSE(utils::algorithmic::is_palindrome("boom"));
}
