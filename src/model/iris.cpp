#include "iris.h"

Iris::Iris(
    float sepal_length,
    float sepal_width,
    float petal_lenght,
    float petal_width,
    std::string flower_name) : petal_lenght(petal_lenght),
                               petal_width(petal_width),
                               sepal_length(sepal_length),
                               sepal_width(sepal_width),
                               flower_name(flower_name)
{
}

Iris::~Iris() {}