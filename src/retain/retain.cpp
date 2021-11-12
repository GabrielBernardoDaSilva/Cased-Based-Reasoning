#include "retain.h"
#include "../math_rbc/util.h"
#include "../types/types.h"

void retain::retain_case(Data &data, std::vector<float> &actual_case, const std::string& name_of_flower)
{
    float similarity = 0;
    auto cases = data.get_iris_data();
    for (int i = 0; i < cases.size(); i++)
    {
        float distance = util::euclidean_distance(cases[i], actual_case);
        similarity = distance < 1.2 ? similarity + 1 : similarity;
        std::cout << "Similarity:\t" << distance << "\n";
    }
    std::cout << "Similar with " << similarity << " other flowers\n";
    if (similarity <= cases.size() / 2)
    {
        cases.push_back(actual_case);
        data.get_flower_data().push_back(Iris{actual_case[0], actual_case[1], actual_case[2], actual_case[3], name_of_flower});
        std::cout << "Case Retained with Success!\n";
        return;
    }
    std::cout << "Case not Retained!\n";
}