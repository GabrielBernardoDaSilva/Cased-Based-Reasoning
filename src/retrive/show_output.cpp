#include "show_output.h"
#include <iostream>
#include "../data/data.h"

void show_output::print_most_similar_itens(vector_tuple most_similars, Data& data){

    auto flowers = data.get_flower_data();

    for(int i =0; i < most_similars.size(); i++){
        auto index = std::get<0>(most_similars[i]);
        std::cout << "Flower similarity: " << std::get<1>(most_similars[i]) <<" flower name: " << flowers[index].flower_name << "\n"; 
    }
}