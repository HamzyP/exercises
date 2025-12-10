#include "pangram.h"
#include <string>
#include <map>
#include <iostream>
#include <cctype>

namespace pangram {

// TODO: add your solution here
    bool is_pangram(std::string abc){
        std::map<char, int> check;
        
        // abc = std::tolower(abc)
        int count = 0;
        
        for (int i =0 ; i < int(abc.size()) ; i++){
            char letter = std::tolower(abc[i]);
            //check if its in our map (aptly named `check`)
            if (check.count(letter)){
                // do nothing! -- We dont want duplicates
            }
            else {
                // if letter is in alphabet
                if (std::isalpha(letter)){
                    // increment our count
                    count += 1;
                    // insert it into our map
                    check.insert({letter, 1});
                }
            }
        }
        std::cout << count;
        return count == 26;
    }
}  // namespace pangram
