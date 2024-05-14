//
// Created by mperetia on 13.05.24.
//

#include "Fixed.h"

const int Fixed::bits = 8;

Fixed::Fixed() {
    this->fixed_point_num = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int number) {
    this->fixed_point_num = number;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number) {
    this->fixed_point_num = number;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) {
    this->fixed_point_num = obj.fixed_point_num;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &obj) {
    this->fixed_point_num = obj.fixed_point_num;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed &obj){
   os << obj.getRawBits();
    return os;
}

int  Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point_num);
}

void Fixed::setRawBits(const int raw) {
    this->fixed_point_num = raw;
}

float Fixed::toFloat() const {
    return static_cast<float>(this->fixed_point_num);
}

int Fixed::toInt() const {
 return this->fixed_point_num;
}