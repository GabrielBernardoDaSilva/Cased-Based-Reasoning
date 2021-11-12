#pragma once

#include <vector>
#include "../types/types.h"


namespace knn
{
    vector_tuple find_knn(const std::vector<std::vector<float>>& cases, const std::vector<float>& actual_case, uint32 num_of_k);
};

