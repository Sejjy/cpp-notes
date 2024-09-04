#include <iostream>

namespace coffee {
    std::string drink = "\nWould you like to grab some coffee?\n";
}

namespace tea {
    std::string drink = "\nWould you like to grab some tea?\n";
}

void name_space() {

    std::string date;
    std::cout << "\nAsk her out. [Coffee/Tea]: ";
    std::getline(std::cin, date);

    if (date == "coffee")
        std::cout << coffee::drink;
    else
        std::cout << tea::drink;
}

int main() {

    std::cout << "\nHim: The moon is beautiful, isn't it?" << std::endl;

    std::string answer;
    std::cout << "\n[Yes/No]: ";
    std::getline(std::cin, answer);
    std::cout << "\nHer: " << answer << std::endl;

    name_space();
    
    std::cout << "\n";
    return 0;
}