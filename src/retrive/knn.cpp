#include <algorithm>
#include <tuple>

#include "knn.h"
#include "../math_rbc/util.h"

std::vector<std::tuple<uint32, float>> knn::find_knn(const std::vector<std::vector<float>> &cases, const std::vector<float> &actual_case, uint32 num_of_k)
{
    std::vector<std::tuple<uint32, float>> distances{};

    for (int i = 0; i < cases.size(); i++)
    {
        float distance = util::euclidean_distance(cases[i], actual_case);
        distances.push_back(std::make_tuple(i, distance));
    }

    std::sort(distances.begin(), distances.end());
    return std::vector<std::tuple<uint32, float>>(distances.begin(), distances.begin() + num_of_k);
}