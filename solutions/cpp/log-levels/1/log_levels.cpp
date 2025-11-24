#include <string>
#include <iostream>

namespace log_line {
std::string message(std::string line) {
    std::cout << "Debug: " << line << std::endl;

    int a = line.find("]:");
    
    std::string msgg = line.substr(a+3);
    // return the message
    return msgg;
}

std::string log_level(std::string line) {
    // return the log level
    int urgency_index_start = line.find("[");
    int urgency_index_end = line.find("]");
    

    std::string urg_lvl = line.substr(urgency_index_start+1, urgency_index_end-1);

    std::cout << urg_lvl;
    return urg_lvl;
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string res = message(line) + " (" + log_level(line) +")";
    return res;
}
}  // namespace log_line
