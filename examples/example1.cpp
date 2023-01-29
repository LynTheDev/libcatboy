#include <iostream>
#include <catboys.hpp>

int main() {
    // Returns a struct with four strings, url and artist, artist_url, source_url 
    catboys::image catboy = catboys::get_image();

    std::cout << "url: " << catboy.url << "\n";
    std::cout << "artist: " << catboy.artist << "\n\n";

    // Returns a struct with two strings, image and response
    catboys::ball ball = catboys::get_ball();

    std::cout << "response: " << ball.response << "\n";
    std::cout << "url: " << ball.image << "\n\n";

    // Returns a struct with two strings, image and response
    catboys::dice dice = catboys::get_dice();

    std::cout << "response: " <<  dice.response << "\n";
    std::cout << "url: " << dice.image << "\n\n";

    // Returns a string 
    std::cout << catboys::baka();
}