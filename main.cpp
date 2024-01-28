#include <iostream>
#include "deep_thought.h"

int main()
{
    DeepThought dt;
    std::cout << "Ask your question, mortal" << std::endl;
    std::string s;
    std::cin >> s;
    std::cout << "The answer to your question is: \"" << dt.Answer(s) << "\"" << std::endl;
}
