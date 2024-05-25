/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:39:34 by mperetia          #+#    #+#             */
/*   Updated: 2024/05/21 11:39:38 by mperetia         ###   ########.fr       */
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
Fixed::Fixed(const Fixed &obj) {
    this->fixed_point_num = obj.fixed_point_num;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &obj) {
    this->fixed_point_num = obj.fixed_point_num;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

int  Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point_num);
}

void Fixed::setRawBits(const int raw) {
    this->fixed_point_num = raw;
}