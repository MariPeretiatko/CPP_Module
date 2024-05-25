//
// Created by mperetia on 12.05.24.
//

#include "StringReplace.h"

StringReplace::StringReplace(std::string path, std::string s1, std::string s2)
: path(path), s1(s1), s2(s2){}

StringReplace::~StringReplace() {
}

std::string StringReplace::getPath(){
    return this->path;
}

std::string StringReplace::getS1(){
    return this->s1;
}

std::string StringReplace::getS2(){
    return this->s2;
}

void StringReplace::setPath(std::string path){
    this->path = path;
}

void StringReplace::setS1(std::string s1){
    this->s1 = s1;
}

void StringReplace::setS2(std::string s2){
    this->s2 = s2;
}

std::string  StringReplace::customReplace(const std::string& buff_line, const std::string& oldStr, const std::string& newStr) {
    std::string result;
    size_t pos = 0;

    while (pos < buff_line.length()) {
        size_t found = buff_line.find(oldStr, pos);
        if (found != std::string::npos) {
            result += buff_line.substr(pos, found - pos);
            result += newStr;
            pos = found + oldStr.length();
        } else {
            result += buff_line.substr(pos);
            break;
        }
    }
    return result;
}

std::string StringReplace::performReplacement(std::string& buff_line) {
    size_t start = buff_line.find(getS1());
    while (start != std::string::npos) {
        buff_line = customReplace(buff_line, getS1(), getS2());
        start = buff_line.find(getS1(), start + getS2().length());
    }
    return buff_line;
}

void StringReplace::writeReplacedLineToFile(std::string buff_line) {
    std::ofstream fout;
    std::string newPath = getPath() + ".replace";
    fout.open(newPath.c_str(), std::ios::app);
    if (!fout.is_open())
        printErrorMes("Problem with open file");
    buff_line = performReplacement(buff_line);
    fout << buff_line << std::endl;
    fout.close();
}

void StringReplace::readAndProcessFile(){
    std::ifstream fin;
    std::string buff_line;
    fin.open(getPath().c_str());
    if (!fin.is_open())
        printErrorMes("Problem with open file");
    while (std::getline(fin, buff_line))
        writeReplacedLineToFile(buff_line);
    std::cout << GREEN << "\nSUCCESS\n\n";
    fin.close();
}
