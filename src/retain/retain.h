#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "../data/data.h"

namespace retain
{
    void retain_case(Data &data, std::vector<float> &actual_case, const std::string &name_of_flower);
}