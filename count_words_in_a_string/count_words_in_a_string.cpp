

#include <iostream>
#include <string>
#include <boost/regex.hpp>

using namespace std::string_literals;


size_t count_words_in_a_string(std::string& str)
{
  boost::sregex_iterator regex_it{
    begin(str), end(str), boost::regex{"\\w+"}};
  boost::sregex_iterator regex_end_it;

  size_t counter = 0;
  while (regex_it != regex_end_it)
  {
    counter++;
    regex_it++;
  }

  return counter;
}


int main()
{
  auto str = "AAAA 12222 BBBBB 44455"s;

  std::cout << "string \"" << str << "\" contains "
            << count_words_in_a_string(str) << " words" << std::endl;

  return 0;
}
