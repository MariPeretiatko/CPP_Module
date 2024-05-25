
#include "StringReplace.h"
void printErrorMes(std::string const &message)
{
    std::cout << RED << "Error ◉ " << RESET << message << std::endl;
    exit(EXIT_FAILURE);
}

void initStringReplace(char *av[])
{
    std::string path = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if(s1 == s2)
        printErrorMes("Strings must not be identical");

    StringReplace replace(path,s1,s2);
    replace.readAndProcessFile();
}

int main(int ac, char *av[])
{
    if(ac != 4)
        printErrorMes("Usage: <program_name> <input_file_path> <old_string> <new_string>");
    initStringReplace(av);
    return 0;
}
