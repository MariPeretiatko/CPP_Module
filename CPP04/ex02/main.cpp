#include "AAnimal.h"
#include "Cat.h"
#include "Dog.h"
#include <vector>

int main()
{
    // Cannot create an instance of an abstract class
//     AAnimal a; //Compilation error


    Dog dog;
    Cat cat;

//     Create a vector of pointers to the Animal base class
    std::vector<AAnimal*> animals;
    animals.push_back(&dog);
    animals.push_back(&cat);

//     Call the makeSound() and printRandomIdea() method for each animal
    for (size_t i = 0; i < animals.size(); i++) {
        animals[i]->makeSound();

        // Type conversion using the dynamic_cast
        if (Dog* dogPtr = dynamic_cast<Dog*>(animals[i])) {
            dogPtr->printRandomIdea();
        } else if (Cat* catPtr = dynamic_cast<Cat*>(animals[i])) {
            catPtr->printRandomIdea();
        }
    }




//    const AAnimal* j = new Dog();

//    for (size_t i = 0; i < animals.size(); i++) {
//        animals[i]->makeSound();
//        animals[i].printRandomIdea();
//    }
//    cat.printRandomIdea();
//    const AAnimal* i = new Cat();
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
//    delete i;
//    delete j;//should not create a leak
//    delete cat;
//    delete dog;
//    ...
    return 0;
}