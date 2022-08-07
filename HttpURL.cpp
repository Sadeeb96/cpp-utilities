//
// Created by ahsan on 8/7/22.
//

#include "HttpURL.h"
const std::regex HttpURL::validator= std::regex("(http|https)://([^/ :]+):?([^/ ]*)(/?[^ #?]*)\\x3f?([^ #]*)#?([^ ]*)");
HttpURL::HttpURL(const std::string &url)
{
    std::cmatch what;
    if(regex_match(url.c_str(), what, validator))
    {
        protocol= what.str(1);
        domain= what.str(2);
        port= what.str(3);
        path= what.str(4);
        query= what.str(5);
        full= url;
    }else{
        throw std::invalid_argument("Malformed URL");
    }
}