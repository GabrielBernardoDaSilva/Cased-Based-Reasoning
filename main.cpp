#include <iostream>
#include "src/data/data.h"
#include "src/retrive/knn.h"
#include "src/retrive/show_output.h"
#include "src/revision/review.h"
#include "src/retain/retain.h"

int main()
{

    int worked = 1;
    std::string new_specie = "";
    std::vector<float> actual_case{5.1f, 3.5f, 1.4f, 0.2f};
    Data data{};
    
    auto sim = knn::find_knn(data.get_iris_data(), actual_case, 3);
    show_output::print_most_similar_itens(sim, data);
    review::solution_works_and_considerations(worked, new_specie);
    retain::retain_case(data, actual_case, new_specie);
    data.print_flowers();
    
    return 0;
}
