#include <iostream>
#include <map>
#include <sstream>

// EmitIntermediate function: for each word w in input_value, emit (w, "1")
void EmitIntermediate(const std::string& key, const std::string& value, std::map<std::string, int>& output) {
    std::istringstream iss(value);
    std::string word;
    while (iss >> word) {
        output[word]++;
    }
}

int main() {
    // Read input from standard input
    std::map<std::string, int> input;
    std::string line;
    while (std::getline(std::cin, line)) {
        // Split the line into key and value
        size_t pos = line.find("\t");
        std::string key = line.substr(0, pos);
        std::string value = line.substr(pos + 1);
        // Emit intermediate key/value pairs
        EmitIntermediate(key, value, input);
    }

    // Write output to standard output
    for (const auto& pair : input) {
        std::cout << pair.first << "\t" << pair.second << std::endl;
    }

    return 0;
}
