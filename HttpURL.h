//
// Created by ahsan on 8/7/22.
//
#pragma once
#include "string"
#include "regex"


class HttpURL {
public:
    std::string protocol;
    std::string domain;
    std::string port;
    std::string path;
    std::string query;
    std::string full;
    static const std::regex validator;
public:
    HttpURL(const std::string& url);
    ~HttpURL()=default;

};

