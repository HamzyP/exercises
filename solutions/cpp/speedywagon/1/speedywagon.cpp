#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

bool connection_check(pillar_men_sensor* sensor){
    return sensor != nullptr;
}

int activity_counter(pillar_men_sensor* sensors, int capacity){
    int total_activity{0};

    for(int i = 0; i < capacity; i++){
        // plus 1 to the memory address does not do + 1 bit, its + (1 * size of object)
        total_activity += (sensors + i) -> activity;
    }
    return total_activity;
}
bool alarm_control( pillar_men_sensor* ptr){
    if (!connection_check(ptr)){
        return false;
    }

    return ptr->activity > 0;
}

bool uv_alarm (pillar_men_sensor* ptr){
    if (!connection_check(ptr)){
        return false;
    }
    
    int uv_level = uv_light_heuristic(&ptr->data);

    return  uv_level > ptr->activity ;
}
    
}  // namespace speedywagon
