#include "grains.h"
#include <cmath>

namespace grains {

// TODO: add your solution here
    unsigned long long square(unsigned long long squareNumber){
        return pow(2, squareNumber-1);
    }

    unsigned long long total(){
        int a = int(pow(2, 63)) ;
        return  a + int(pow(2, 63)) +1;
    }
}  // namespace grains
