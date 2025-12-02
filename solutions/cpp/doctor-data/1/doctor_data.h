#pragma once
#include <string>

namespace star_map {
    enum class System {
        Sol,            
        BetaHydri,     
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}

namespace heaven {
    class Vessel {
    public:
        // Member variables
        std::string name; 
        int generation;
        star_map::System current_system;
        int busters;

        // Constructor
        Vessel(std::string name, int generation, star_map::System system = star_map::System::Sol);

        // Member Functions
        Vessel replicate(std::string new_name);
        void make_buster();
        bool shoot_buster();
    };

    std::string get_older_bob(Vessel v1, Vessel v2);
    bool in_the_same_system(Vessel v1, Vessel v2);
}