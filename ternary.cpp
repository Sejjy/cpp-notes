#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string name;
    bool stranger = true;

    while (stranger) {
        std::cout << "\nEnter your name: ";
        std::getline(std::cin, name);

        std::string uppercase = name;

        for (char &c : uppercase) {
            c = std::toupper(c);
        }

        if (uppercase == "OANA GONZAGA") {
            std::cout << "\nHI, BABY KO! ^-^\n" << std::endl;
            stranger = false;
        } else {
            std::cout << "\nHi, " << name << "." << std::endl;
            std::cout << "You're not my baby." << std::endl;
        }
    }

    return 0;
}
