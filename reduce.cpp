#include <iostream>
#include <sstream>
#include <map>

int main() {
    // Read intermediate key/value pairs from standard input and aggregate values for each key
    std::map<std::string, int> output;
    std::string line;
    std::string cat;
    while (std::getline(std::cin, line)) {
        // Split the line into key and value
        size_t pos = line.find("\t");
        std::string key = line.substr(0, pos);
        std::string value = line.substr(pos + 1);    
    	cat += value;
        std::cout << key << "\t" << value << std::endl;
    }
    return 0;
}
