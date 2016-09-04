

#include <iostream>
#include <string>
#include <array>
#include <algorithm>

using namespace std::string_literals;

int main()
{
  auto const_c_str = "const_c_str";

  char c_str[] = "c style string";
  auto std_string  = "std string"s;
  auto std_array_char = std::array<char, 15>{"std_array_char"};

  std::cout << c_str << std::endl;
  std::cout << std_string << std::endl;
  for (auto ch : std_array_char) { std::cout << ch;}
  std::cout << std::endl << std::endl;

  std::reverse(std::begin(c_str), std::end(c_str) - 1);
  std::reverse(std::begin(std_string), std::end(std_string));
  std::reverse(std::begin(std_array_char), std::end(std_array_char));

  std::cout << c_str << std::endl;
  std::cout << std_string << std::endl;
  for (auto ch : std_array_char) { std::cout << ch; }
  std::cout << std::endl << std::endl;

  return 0;
}

