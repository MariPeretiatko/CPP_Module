//
// Created by mperetia on 09.12.24.
//

#include "Serializer.hpp"

Serializer::Serializer() {
  std::cout<<"Constructing Serializer"<<std::endl;
}

Serializer::Serializer(const Serializer& obj) {
  std::cout<<"Constructing Serializer"<<std::endl;
  *this = obj;
}

Serializer& Serializer::operator=(const Serializer& obj) {
  std::cout<<"Copy Assignment"<<std::endl;
  (void)obj;
  return *this;
}

Serializer::~Serializer() {
  std::cout<<"Destructing Serializer"<<std::endl;
}

uintptr_t Serializer::serialize(Data* ptr) {
  return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
  return reinterpret_cast<Data*>(raw);
}

//uintptr_t Serializer::serialize(Data1* ptr) {
//  return reinterpret_cast<uintptr_t>(ptr);
//}

//Data1* Serializer::deserializeData(uintptr_t raw) {
//  return reinterpret_cast<Data1*>(raw);
//}