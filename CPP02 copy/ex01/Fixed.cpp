/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:43:42 by mperetia          #+#    #+#             */
/*   Updated: 2024/05/21 11:43:45 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    this->fixed_point_num = number << this->bits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number) {
//    this->fixed_point_num = static_cast<int32_t>(round(number * (1 << this->bits)));
    this->fixed_point_num = (round(number * (1 << this->bits)));
    std::cout << "Float constructor called" << std::endl;
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
   os << obj.toFloat();
    return os;
}

int  Fixed::getRawBits() const{
//    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point_num);
}

void Fixed::setRawBits(const int raw) {
    this->fixed_point_num = raw;
}

float Fixed::toFloat() const {
//    return static_cast<float>(round(this->fixed_point_num) / (1 << this->bits));
    return round(this->fixed_point_num) / (1 << this->bits);
}

int Fixed::toInt() const {
 return this->fixed_point_num >> this->bits;
}