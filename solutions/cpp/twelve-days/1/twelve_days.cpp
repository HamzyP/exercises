#include "twelve_days.h"

namespace twelve_days {

// TODO: add your solution here

    const std::vector<std::string> days = {
        "", "first", "second", "third", "fourth", "fifth",
    "sixth", "seventh", "eighth", "ninth", "tenth",
    "eleventh", "twelfth"
    };

    const std::vector<std::string> gifts = {
        "",
        "a Partridge in a Pear Tree",
        "two Turtle Doves",
        "three French Hens",
        "four Calling Birds",
        "five Gold Rings",
        "six Geese-a-Laying",
        "seven Swans-a-Swimming",
        "eight Maids-a-Milking",
        "nine Ladies Dancing",
        "ten Lords-a-Leaping",
        "eleven Pipers Piping",
        "twelve Drummers Drumming"
    };
std::string recite(int start_verse, int end_verse){
    std::string song = "";

        // loop through the days
        for (int day = start_verse; day <= end_verse; day++) {
            
            // add the start
            song += "On the " + days[day] + " day of Christmas my true love gave to me: ";

            // add the gifts working backwards
            for (int gift = day; gift >= 1; gift--) {
                
                // if we are not at last day and its last gift then add `and`
                if (gift == 1 && day > 1) {
                    song += "and ";
                }

                song += gifts[gift];

                // add a full stop on last gift.
                if (gift == 1) {
                    song += ".";
                } else {
                    song += ", ";
                }
            }
            
            song += "\n";
            
            if (day != end_verse) {
                song += "\n";
            }
        }

        return song;
    
}
}  // namespace twelve_days
