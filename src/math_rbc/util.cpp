#include <exception>
#include <cmath>
#include "../math_rbc/util.h"


float util::euclidean_distance(const std::vector<float>& attrs_obj1, const std::vector<float>& attrs_obj2){
    if (attrs_obj1.size() != attrs_obj2.size())
        return -1;
    
    float distance = 0.0f;
    for(int i = 0; i < attrs_obj1.size(); i++){
        distance += powf(attrs_obj1[i] - attrs_obj2[i], 2);
    }

    return sqrtf(distance);
}

