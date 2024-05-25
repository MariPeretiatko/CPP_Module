#include "Zombie.hpp"

void printErrorMes(std::string const &message)
{
    std::cout << RED << "Error ◉ " << RESET << message << std::endl;

}


int main()
{
    std::string input;
    int zombie_count;
    while (true)
    {
        std::cout << "Write count : ";
        std::getline(std::cin, input);
        std::istringstream iss(input);
        if(iss>>zombie_count)
        {
            if(zombie_count > 0)
                break;
            else
                printErrorMes("zombie_count > 0");
        }
        else
            printErrorMes("try again");

    }
    Zombie *horde = zombieHorde(zombie_count, "Zombie");
    for (int i = 0; i < zombie_count; i++)
            horde[i].announce();

    delete[] horde;
    return 0;
}