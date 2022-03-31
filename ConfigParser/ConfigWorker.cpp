#include <stdio.h>
#include "ConfigWorker.h"
#include <sstream>
#include <map>
#include <iostream>
#include <fstream>
#include <vector>
void ConfigWorker::ParseConfig(std::string path) {
    std::map<std::string, std::string> mp;
    std::ifstream is_file(path);
    std::string line;
    while (std::getline(is_file, line))
    {
        std::istringstream is_line(line);
        std::string key;
        if (std::getline(is_line, key, '='))
        {
            std::string value;
            if (std::getline(is_line, value))
               mp[key] = value;
                std::cout << key << ":" << mp[key] << std::endl;
        }
        
    }
}
