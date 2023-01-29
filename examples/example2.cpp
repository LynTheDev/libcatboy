#include <iostream>
#include <catboys.hpp>

int main() {
    catboys::image img = catboys::get_image();

    std::cout << "url: " << img.url << std::endl;
    std::cout << "artist: " << img.artist << std::endl;
    std::cout << "artist credentials: " << img. artist_url << std::endl;
    std::cout << "image source: " << img.source_url << std::endl;
    
return 0;
}