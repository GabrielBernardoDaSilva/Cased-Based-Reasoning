#pragma once

#include <iostream>

class Iris
{

public:
    float sepal_length;
    float sepal_width;
    float petal_lenght;
    float petal_width;
    std::string flower_name;

    Iris(
        float sepal_length,
        float sepal_width,
        float petal_lenght,
        float petal_width,
        std::string flower_name);
    ~Iris();
};
