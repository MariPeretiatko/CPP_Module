/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:50:07 by mperetia          #+#    #+#             */
/*   Updated: 2024/05/21 11:50:09 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

Point::Point() : x(Fixed()), y(Fixed()){
//    std::cout << "Point - Default constructor called" << std::endl;
}

Point::Point(float x, float y) : x(Fixed(x)), y(Fixed(y)){
//    std::cout << "Point - constructor with params called" << std::endl;
}

Point::Point(const Point &obj) : x(obj.x), y(obj.y){
//    std::cout << "Point - Copy constructor called" << std::endl;
}

Point& Point::operator=(const Point &obj) {
//    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        (Fixed) this->x = obj.x;
        (Fixed) this->y = obj.x;
    }
    return (*this);
}

bool Point::operator==(const Point &obj) const {
    return ((this->x == obj.x) && (this->y == obj.y));
}

Point::~Point() {
//    std::cout << "Point - Destructor called" << std::endl;
}

float Point::getX() const{
    return this->x.toFloat();
}

float Point::getY() const{
    return this->y.toFloat();
}