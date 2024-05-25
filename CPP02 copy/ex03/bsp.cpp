/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:49:45 by mperetia          #+#    #+#             */
/*   Updated: 2024/05/21 12:02:50 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

bool isPointVertex(Point const a, Point const b, Point const c, Point const point){
    return (a == point || b == point || c == point);
}

// denom = (b_y - c_y) * (a_x - c_x) + (c_x - b_x) * (a_y - c_y)
// A = ((b_y - c_y) * (p_x - c_x) + (c_x - b_x) * (p_y - c_y)) / denom
// B = ((c_y - a_y) * (p_x - c_x) + (a_x - c_x) * (p_y - c_y)) / denom
// C = 1 - A - B
bool bsp( Point const a, Point const b, Point const c, Point const point){
    if(isPointVertex(a, b, c, point))
        return false;
    float denom = (b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY());
    float A = (b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY());
    A /= denom;
    float B = (c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY());
    B /= denom;
    float C = 1 - A - B;
    return (A > 0 && B > 0 && C > 0);
}

