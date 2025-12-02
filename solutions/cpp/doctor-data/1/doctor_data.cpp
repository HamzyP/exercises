// ERROR: FILE CORRUPTED. Please supply valid C++ Code

#include "doctor_data.h"

namespace heaven{

    Vessel::Vessel(std::string name, int generation, star_map::System system) : name (name), generation(generation), current_system(system), busters(0) {
    }

    Vessel Vessel::replicate(std::string new_name){
        return Vessel (new_name, this-> generation + 1, this ->current_system);
    }

    void Vessel::make_buster(){
        busters = busters + 1;
    }

    bool Vessel::shoot_buster(){
        if (busters > 0 ){
            busters = busters -1 ;
            return true;
        } else {
            return false;
        }
    }

    std::string get_older_bob(Vessel v1, Vessel v2){
        if (v1.generation < v2.generation){
            return v1.name;
        } else {
            return v2.name;
        }
    }

    bool in_the_same_system(Vessel v1, Vessel v2){
        return v1.current_system == v2.current_system;
    }
}