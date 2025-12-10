#include "raindrops.h"

namespace raindrops {

// TODO: add your solution here
std::string convert(int num){
    std::string a = "";
    if (num %3 == 0) {
        a += "Pling";
    } 
    if ( num % 5 == 0){
        a += "Plang";
    }

    if (num % 7 == 0){
        a += "Plong";
    }

    if ( num % 7 != 0 && num % 5 != 0 && num % 3 != 0){
        return std::to_string(num);
    }

    return a;
    
}
}  // namespace raindrops
