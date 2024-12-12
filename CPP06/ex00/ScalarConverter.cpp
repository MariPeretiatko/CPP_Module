//
// Created by mperetia on 30.11.24.
//

#include "ScalarConverter.hpp"

const long MIN_INT = std::numeric_limits<int>::min();
const long MAX_INT = std::numeric_limits<int>::max();
const float MIN_FLOAT = -std::numeric_limits<float>::max();
const float MAX_FLOAT = std::numeric_limits<float>::max();
const double MIN_DOUBLE = -std::numeric_limits<double>::max();
const double MAX_DOUBLE = std::numeric_limits<double>::max();

ScalarConverter::ScalarConverter(){
  std::cout<<"Constructing ScalarConverter"<<std::endl;
}

ScalarConverter::~ScalarConverter(){
  std::cout<<"Destructing ScalarConverter"<<std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &obj){
  std::cout<<"Copy Constructor"<<std::endl;
  *this = obj;
}
ScalarConverter &ScalarConverter::operator=(ScalarConverter const &obj){
  std::cout<<"Copy Assignment"<<std::endl;
  (void)obj;
  return *this;
}

bool isSpecial(std::string const &value){
  return value == "-inf" || value == "+inf" ||
         value == "-inff" || value == "+inff" ||
         value == "nan" || value == "nanf";
}

void printSpecial(std::string const &value){
  std::cout<<"char : impossible"<<std::endl;
  std::cout<<"int : impossible"<<std::endl;

  if(value == "-inf" || value == "-inff"){
    std::cout<<"float : -inff"<<std::endl;
    std::cout<<"double : -inf"<<std::endl;
  }
  if(value == "+inf" || value == "+inff"){
    std::cout<<"float : +inff"<<std::endl;
    std::cout<<"double : +inf"<<std::endl;
  }
  if(value == "nan" || value == "nanf"){
    std::cout<<"float : nanf"<<std::endl;
    std::cout<<"double : nan"<<std::endl;
  }
}

template<typename T>
void printConversions(T value) {

    std::cout << "char: ";
    if (value < 0 || value > 127)
        std::cout << "impossible" << std::endl;
    else if (std::isprint(static_cast<int>(value)))
        std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;

    std::cout << "int: ";
    if (value < MIN_INT || value > MAX_INT)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(value) << std::endl;

    std::cout << "float: ";
    if (value < MIN_FLOAT || value > MAX_FLOAT)
        std::cout << "impossible" << std::endl;
    else
        std::cout  << std::fixed << std::setprecision(1)
                  << static_cast<float>(value) << "f" << std::endl;

    std::cout << "double: ";
    if (value < MIN_DOUBLE || value > MAX_DOUBLE)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<double>(value) << std::endl;
}


void ScalarConverter::convert(std::string const &value){
   	size_t len = value.length();
    size_t dot = value.find('.');

    if (isSpecial(value)){
      printSpecial(value);
    }else if (len == 1 && !isdigit(value[0])) {
        printConversions(static_cast<char>(value[0]));
    } else if (dot == std::string::npos) {
        long l = std::atol(value.c_str());
        printConversions(l);
    } else if (value[len - 1] == 'f') {
        float f = std::atof(value.c_str());
        printConversions(f);
    } else {
        double d = std::atof(value.c_str());
        printConversions(d);
    }
}
