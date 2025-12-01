#include "leap.h"

namespace leap {

// TODO: add your solution here
    bool is_leap_year(int year){
        // every century we skip a leap year
        // unless that century is divisible by 400
        
        return (year % 4 ==0) && (year % 100 != 0 || year % 400 == 0);
    }
}  // namespace leap
