
#include <string>
#include <iostream>
#include <iterator>



size_t count_vowels(std::string& str)
{
  return size_t{};
}


int main()
{
  std::string str{std::istream_iterator<double> {std::cin},
                  std::istream_iterator<double> {}};

  std::cout << "Vowels number = " << count_vowels(str) << std::endl;
  
  return 0;
}

