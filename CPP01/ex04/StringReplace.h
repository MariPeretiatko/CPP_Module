//
// Created by mperetia on 12.05.24.
//

#ifndef CPP_STRINGREPLACE_H
#define CPP_STRINGREPLACE_H

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

# define RESET "\033[0m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"

class StringReplace {
private:
    std::string path;
    std::string s1;
    std::string s2;

    void writeReplacedLineToFile(std::string buff_line);
    std::string performReplacement(std::string &buff_line);
    std::string customReplace(const std::string& buff_line, const std::string& oldStr, const std::string& newStr);
public:
    StringReplace(std::string path, std::string s1, std::string s2);
    ~StringReplace();
    std::string getPath();
    std::string getS1();
    std::string getS2();

    void setPath(std::string path);
    void setS1(std::string s1);
    void setS2(std::string s2);

    void readAndProcessFile();


};
void printErrorMes(std::string const &message);


#endif //CPP_STRINGREPLACE_H
