#include "data.h"

Data::Data()
{
    for (int i = 0; i < iris_data.size(); i++)
    {
        const auto &iris = iris_data[i];
        std::string flower_name = "";
        if (i <= 50)
            flower_name = "Iris-setosa";
        else if (i > 51 && i <= 100)
            flower_name = "Iris-versicolor";
        else
            flower_name = "Iris-virginica";
        this->flowers.push_back(Iris(iris[0], iris[1], iris[2], iris[3], flower_name));
    }
}

Data::~Data() {}

void Data::print_flowers() const
{
    for (const auto &flower : flowers)
        std::cout << "Sepal Lenght: " << flower.sepal_length << ", Sepal Width: " << flower.sepal_width
                  << ", Petal Lenght: " << flower.petal_lenght << ", Petal Width: " << flower.petal_width
                  << " and flower name: " << flower.flower_name << "\n";
}