//
// Created by mperetia on 30.11.24.
//

#pragma once

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
#include <climits>


class ScalarConverter {
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& obj);
        ScalarConverter & operator=(const ScalarConverter& obj);
        ~ScalarConverter();

        static void convert(const std::string& value);
};


