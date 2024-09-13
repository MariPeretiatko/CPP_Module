
#include "Brain.h"

Brain::Brain() {
    std::srand(time(0));
    char buff[3];
    for (int i = 0; i < COUNT_IDEAS; i++) {
        sprintf(buff, "%d", i);
        this->ideas[i] =  "ideas [" +  std::string (buff) + "]";
    }
    std::cout << GREEN "Brain Default Constructor Called" RESET << std::endl;
}

Brain::Brain(const Brain &obj) {
    if(this != &obj)
        *this = obj;
    std::cout << YELLOW "Brain Copy Constructor Called" RESET << std::endl;
}

Brain &Brain::operator=(const Brain &obj) {
    std::cout << YELLOW "Brain Copy assignment operator called" RESET << std::endl;
    if(this != &obj)
    {
        for(int i = 0; i < COUNT_IDEAS; i++)
            this->ideas[i] = obj.ideas[i];
    }
    return *this;
}

Brain::~Brain() {
    std::cout << RED "Brain Destructor Called" RESET << std::endl;
}

std::string Brain::getRandomIdea(){
    return this->ideas[std::rand() % COUNT_IDEAS];
}
