#include <iostream>
#include <catboys.hpp>

int main() {
    catboys::ball eight_ball = catboys::get_ball();

    std::string my_response;
    std::cin >> my_response;

    std::cout << eight_ball.response << std::endl;
    std::cout << eight_ball.image << std::endl;
}