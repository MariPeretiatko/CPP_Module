//
// Created by mperetia on 13.05.24.
//

#include "Fixed.h"

Fixed::Fixed() {
    this->raw_bits = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed &obj) {
    this->raw_bits = obj.raw_bits;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &obj) {
    this->raw_bits = obj.raw_bits;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

int  Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->raw_bits);
}

void Fixed::setRawBits(const int raw) {
    this->raw_bits = raw;
}