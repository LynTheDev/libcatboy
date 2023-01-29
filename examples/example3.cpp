#include <iostream>
#include <catboys.hpp>

int main() {
    catboys::dice dice = catboys::get_dice();

    if (stoi(dice.response) == 4) {
        std::cout << "Lucky today, arent you?";
    } else {
        std::cout << "Nope, not lucky today.";
    }

return 0;
}