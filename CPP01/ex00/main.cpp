#include "Zombie.hpp"

int main()
{
    Zombie tmp;
    tmp.announce();

    Zombie *tmp2 = tmp.newZombie("tmp2");
    tmp2->announce();

    tmp.randomChump("Qwerty");

    delete tmp2;
    return 0;
}