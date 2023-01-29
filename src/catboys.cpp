#include "../include/catboys.hpp"

using namespace curlpp::options;

namespace catboys {
    image get_image() {
        // Making the api request
		curlpp::Easy req;
        
		req.setOpt<curlpp::options::Url>("https://api.catboys.com/img");
        std::list<std::string> header = {
            "Content-Type: application/json"
        };

        req.setOpt<curlpp::options::HttpHeader>(header);

        // Getting the body and turning it into json
		std::ostringstream out_stream;
        out_stream << req;

        std::string body = out_stream.str();
        nlohmann::json parser = nlohmann::json::parse(body);

        // Forming the struct
        image res_struct;

        res_struct.url = parser["url"].get<std::string>();
        res_struct.artist = parser["artist"].get<std::string>();
        res_struct.artist_url = parser["artist_url"].get<std::string>();
        res_struct.source_url = parser["source_url"].get<std::string>();

    return res_struct;
    }

    std::string baka() {
        curlpp::Easy req;
        
		req.setOpt<curlpp::options::Url>("https://api.catboys.com/baka");
        std::list<std::string> header = {
            "Content-Type: application/json"
        };

        req.setOpt<curlpp::options::HttpHeader>(header);

		std::ostringstream out_stream;
        out_stream << req;

        std::string body = out_stream.str();
        nlohmann::json parser = nlohmann::json::parse(body);

    return parser["url"].get<std::string>();
    }

    ball get_ball() {
        curlpp::Easy req;
        
		req.setOpt<curlpp::options::Url>("https://api.catboys.com/8ball");
        std::list<std::string> header = {
            "Content-Type: application/json"
        };

		std::ostringstream out_stream;
        out_stream << req;

        std::string body = out_stream.str();
        nlohmann::json parser = nlohmann::json::parse(body);

        ball res_struct;

        res_struct.response = parser["response"].get<std::string>();
        res_struct.image = parser["url"].get<std::string>();

    return res_struct;
    }

    dice get_dice() {
        curlpp::Easy req;
        
		req.setOpt<curlpp::options::Url>("https://api.catboys.com/dice");
        std::list<std::string> header = {
            "Content-Type: application/json"
        };

        req.setOpt<curlpp::options::HttpHeader>(header);

		std::ostringstream out_stream;
        out_stream << req;

        std::string body = out_stream.str();
        nlohmann::json parser = nlohmann::json::parse(body);

        dice res_struct;

        res_struct.response = parser["response"].get<std::string>();
        res_struct.image = parser["url"].get<std::string>();

    return res_struct;
    }
}