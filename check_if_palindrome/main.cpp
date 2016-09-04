

#include <iostream>
#include <string>
#include <algorithm>

using namespace std::string_literals;


bool check_if_palindrome(const std::string& str)
{
  return true;
}

int main()
{
  auto palindrome     = "abcdcba"s;
  auto not_palindrome = "abcdefg"s;

  std::cout << palindrome << " is palindrome? - " << 
    check_if_palindrome(palindrome) << std::endl;

  std::cout << not_palindrome << " is palindrome? - " <<
    check_if_palindrome(not_palindrome) << std::endl;

  return 0;
}
