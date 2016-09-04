

#include <iostream>
#include <string>

using namespace std::string_literals;


size_t count_words_in_a_string(std::string& str)
{
  return 0;
}

int main()
{
  auto str = "string from four words"s;

  std::cout << "string \"" << str << "\" contains "
            << count_words_in_a_string(str) << " words" << std::endl;

  return 0;
}
