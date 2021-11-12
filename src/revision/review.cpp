#include "review.h"
#include <iostream>

void review::solution_works_and_considerations(int& worked, std::string& new_specie){
    std::cout<<"The Solution Worked: ";
    std::cin>>worked;
    std::cout <<"\n";

    if (worked == 1){
        std::cout  << "Tell me the which kind of iris is: ";
        std::cin >> new_specie;
        std::cout << "Thank you \n";
    }
}