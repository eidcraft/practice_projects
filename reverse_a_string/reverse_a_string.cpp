

#include <iostream>
#include <string>
#include <array>
#include <algorithm>

using namespace std::string_literals;


template<typename T>
T reverse(T str)
{
  std::cerr << "No reverse function specialization for type T=\"" 
            << typeid(T).name() << "\"\n";
  return str;
}


int main()
{
  char c_str[] = "c style string";
  auto std_string  = "std string"s;
  auto const_c_str = "const_c_str";
  auto std_array_char = std::array<char, 5>{"asda"};

  std::cout << "Initial strings" << std::endl;
  std::cout << c_str << std::endl;
  std::cout << std_string << std::endl;
  std::cout << const_c_str << std::endl;
  for (auto ch : std_array_char) { std::cout << ch;}
  std::cout << std::endl << std::endl;

  reverse(std_array_char);
  reverse(const_c_str);
  reverse(std_string);
  reverse(c_str);

  std::cout << std::endl << "Reversed strings" << std::endl;
  std::cout << const_c_str << std::endl;
  std::cout << std_string << std::endl;
  std::cout << c_str << std::endl;
  for (auto ch : std_array_char) { std::cout << ch; }
  std::cout << std::endl << std::endl;


  return 0;
}

