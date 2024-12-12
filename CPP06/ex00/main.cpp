//
// Created by mperetia on 30.11.24.
//

#include <iostream>
//#include <climits>
//#include <cfloat>
//#include <ctime>
#include "ScalarConverter.hpp"

//void someFunction() {
//  // Симуляция работы
//  for (volatile int i = 0; i < 100000000; ++i);
//}

int main(int ac, char *av[])
{
//  std::clock_t start = std::clock();
  if (ac != 2)
  {
    std::cout << "Try again!" << std::endl;
    return 1;
  }
  ScalarConverter::convert(av[1]);


//  someFunction();
//
//
//  std::clock_t end = std::clock();
//  // Вычисление затраченного времени
//  double elapsed_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
//
//  std::cout << "Elapsed time: " << elapsed_time << " seconds" << std::endl;

//  std::cout << av[1] << std::endl;
//
//  std::cout << "INT_MIN: " << INT_MIN << std::endl;
//  std::cout << "INT_MAX: " << INT_MAX << std::endl;
//
//  std::cout << "FLOAT_MIN: " << FLT_MIN << std::endl;
//  std::cout << "FLOAT_MAX: " << FLT_MAX << std::endl;
//
//  std::cout << "DOUBLE_MIN: " << DBL_MIN << std::endl;
//  std::cout << "DOUBLE_MAX: " << DBL_MAX << std::endl;
  return 0;
}