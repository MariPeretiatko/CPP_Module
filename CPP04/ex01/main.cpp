#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;


//    const Animal* j = new Dog();
//    const Animal* i = new Cat();
//    const Cat *cat = new Cat();
//    const Dog *dog = new Dog();
//    j->makeSound();
//    i->makeSound();
//    cat->printRandomIdea();
//    dog->printRandomIdea();
//
//    cat->printRandomIdea();
//    cat->printRandomIdea();
//    cat->printRandomIdea();
//    cat->printRandomIdea();
//    cat->printRandomIdea();
//    cat->printRandomIdea();
//    cat->printRandomIdea();
//
//    dog->printRandomIdea();
//    dog->printRandomIdea();
//    dog->printRandomIdea();
//
//    delete i;
//    delete j;//should not create a leak
//    delete cat;
//    delete dog;

//    const size_t arraySize = 4;
//    Animal* animals[arraySize];
//
//    for (size_t i = 0; i < arraySize / 2; i++) {
//        animals[i * 2] = new Dog();
//        animals[i * 2 + 1] = new Cat();
//    }
//    for (size_t i = 0; i < arraySize; i++) {
//        delete animals[i];
//    }

    return 0;
}