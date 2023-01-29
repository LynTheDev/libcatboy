#pragma once


#include <iostream>
#include <sstream>

// I'm so sorry
#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Infos.hpp>

#include <nlohmann/json.hpp>

namespace catboys {
    struct image {
        std::string url, artist, 
        artist_url, source_url;
    };

    struct ball {
        std::string response, image;
    };

    struct dice {
        std::string response, image;
    };


    image get_image();

    std::string baka();

    ball get_ball();

    dice get_dice();
}