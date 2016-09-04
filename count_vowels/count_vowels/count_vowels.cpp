
#include <string>
#include <iostream>
#include <iterator>
#include <algorithm>


size_t count_vowels(std::string& str)
{
  auto is_vowel = [](char c) { 
    return std::string("aeiou").find(c) != std::string::npos;};
  
  return count_if(begin(str), end(str), is_vowel);
}


int main()
{
  std::string str{std::istream_iterator<char> {std::cin},
                  std::istream_iterator<char> {}};

  std::cout << "Vowels number = " << count_vowels(str) << std::endl;
  
  return 0;
}

