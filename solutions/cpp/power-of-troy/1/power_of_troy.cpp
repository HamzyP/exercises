#include "power_of_troy.h"

namespace troy {
    void give_new_artifact(human& a, std::string b){
      a.possession = std::make_unique<artifact> (b);
    };

    void exchange_artifacts(std::unique_ptr<artifact>& a, std::unique_ptr<artifact>& b){
        std::swap(a, b);
    }

    void manifest_power(human& a, std::string b){
        a.own_power = std::make_shared<power> (b);
    }

    void use_power(human& caster, human& target){
        target.influenced_by = caster.own_power;
    }

    int power_intensity (human& h){
        if (!h.own_power){
            return 0;
        } else {
            return h.own_power.use_count();
        }
    }
}  // namespace troy
