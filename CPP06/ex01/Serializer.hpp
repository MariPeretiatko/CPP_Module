//
// Created by mperetia on 09.12.24.
//

#pragma once

#include <iostream>
#include <stdint.h>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define YELLOW "\033[33m"

struct Data {
  int id;
  char ch;
  float value;
};

//struct Data1 {
//    double num1;
//    double num2;
//    double num3;
//    double num4;
//};


class Serializer {
  private:
    Serializer();
    Serializer(const Serializer& obj);
    Serializer& operator=(const Serializer& obj);
    ~Serializer();
  public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);

//    static uintptr_t serialize(Data1* ptr);
//    static Data1* deserializeData(uintptr_t raw);

};



