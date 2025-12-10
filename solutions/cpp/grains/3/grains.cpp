#include "grains.h"
#include <cmath>
#include <cstdint>

namespace grains {

// TODO: add your solution here
    uint64_t square(uint64_t squareNumber){
        return pow(2, squareNumber-1);
    }

    uint64_t total(){
        uint64_t a = uint64_t(pow(2, 63)) ;
        return  a + uint64_t(pow(2, 63)) -1;
    }
}  // namespace grains
