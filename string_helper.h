#pragma once
#include<string>
#include<algorithm>


class StringHelper
{
public:
    static std::string toLowerCase(const std::string& str) {
        std::string lowerStr = str;
        std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
        return lowerStr;
    }
};