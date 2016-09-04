

#include <iostream>
#include <string>
#include <algorithm>

using namespace std::string_literals;


bool check_if_palindrome(std::string& str)
{
  if (str.size() < 2) return true;

  auto offset = (int)std::floor((double)str.size() / 2);
  auto left_midl_it = begin(str) + offset;
  auto right_midl_it = rbegin(str) + offset;

  return std::equal(begin(str), left_midl_it, rbegin(str), right_midl_it);
}

int main()
{
  auto palindrome = "abcdcba"s;
  auto not_palindrome = "abcdefg"s;

  std::cout << palindrome << " is palindrome? - " <<
    check_if_palindrome(palindrome) << std::endl;

  std::cout << not_palindrome << " is palindrome? - " <<
    check_if_palindrome(not_palindrome) << std::endl;

  return 0;
}
