//
// Created by mperetia on 09.12.24.
//

#include <iostream>
#include "Serializer.hpp"

int main() {

Data myData;
    myData.id = 10;
    myData.ch = 'a';
    myData.value = 0.01f;

    std::cout << GREEN << "=== Data Structure Info ===" << RESET << std::endl;
    std::cout << BLUE << "sizeof(int): " << RESET << sizeof(int) << std::endl;
    std::cout << BLUE << "sizeof(char): " << RESET << sizeof(char) << std::endl;
    std::cout << BLUE << "sizeof(float): " << RESET << sizeof(float) << std::endl;
    std::cout << YELLOW << "SUM = " << RESET << (sizeof(int) + sizeof(char) + sizeof(float))
              << " (+3 for alignment) = " << sizeof(Data) << std::endl;

    std::cout << GREEN << "\nData Details:" << RESET << std::endl;
    std::cout << BLUE << "id: " << RESET << myData.id << std::endl;
    std::cout << BLUE << "ch: " << RESET << myData.ch << std::endl;
    std::cout << BLUE << "value: " << RESET << myData.value << std::endl;

    uintptr_t ptr_myData = Serializer::serialize(&myData);
    std::cout << GREEN << "\nSerialized Pointer (uintptr_t):" << RESET << std::endl;
    std::cout << BLUE << "ptr_myData: " << RESET << ptr_myData << std::endl;
    std::cout << BLUE << "Address of ptr_myData: " << RESET << &ptr_myData << std::endl;
    std::cout << BLUE << "sizeof(ptr_myData): " << RESET << sizeof(ptr_myData) << std::endl;

    Data* new_Data = Serializer::deserialize(ptr_myData);
    std::cout << GREEN << "\nDeserialized Data Details:" << RESET << std::endl;
    std::cout << BLUE << "new_Data->id: " << RESET << new_Data->id << std::endl;
    std::cout << BLUE << "new_Data->ch: " << RESET << new_Data->ch << std::endl;
    std::cout << BLUE << "new_Data->value: " << RESET << new_Data->value << std::endl;

    // Работа с Data1
//    Data1 myData1;
//    myData1.num1 = 10.0;
//    myData1.num2 = 20.0;
//    myData1.num3 = 30.0;
//    myData1.num4 = 40.0;
//
//    std::cout << GREEN << "\n\n=== Data1 Structure Info ===" << RESET << std::endl;
//    std::cout << BLUE << "sizeof(myData1): " << RESET << sizeof(myData1) << std::endl;
//
//    uintptr_t ptr_myData1 = Serializer::serialize(&myData1);
//    std::cout << GREEN << "\nSerialized Pointer (uintptr_t):" << RESET << std::endl;
//    std::cout << BLUE << "ptr_myData1: " << RESET << ptr_myData1 << std::endl;
//    std::cout << BLUE << "Address of ptr_myData1: " << RESET << &ptr_myData1 << std::endl;
//    std::cout << BLUE << "sizeof(ptr_myData1): " << RESET << sizeof(ptr_myData1) << std::endl;
//
//    Data1* new_d = Serializer::deserializeData(ptr_myData1);
//    std::cout << GREEN << "\nDeserialized Data1 Details:" << RESET << std::endl;
//    std::cout << BLUE << "new_d->num1: " << RESET << new_d->num1 << std::endl;
//    std::cout << BLUE << "new_d->num2: " << RESET << new_d->num2 << std::endl;
//    std::cout << BLUE << "new_d->num3: " << RESET << new_d->num3 << std::endl;
//    std::cout << BLUE << "new_d->num4: " << RESET << new_d->num4 << std::endl;

    return 0;
}
