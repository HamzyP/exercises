#pragma once

namespace space_age {

// TODO: add your solution here
class space_age{
    private:
        long long seconds_; // 1 billion is a big number
    public:
        space_age(long long seconds); //constructor
        long long seconds() const; //getter
        double on_earth() const; //const means the function is read only.
        double on_mercury() const;
        double on_venus() const;
        double on_mars() const;
        double on_jupiter() const;
        double on_saturn() const;
        double on_uranus() const;
        double on_neptune() const;
        
};
}  // namespace space_age
