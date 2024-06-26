/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperetia <mperetia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:49:55 by mperetia          #+#    #+#             */
/*   Updated: 2024/05/21 11:49:58 by mperetia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

int main(void)
{
    Point A(0.0f, 0.0f);
    Point B(5.0f, 0.0f);
    Point C(0.0f, 5.0f);

    Point P1(1.0f, 1.0f); // внутри треугольника        true
    Point P2(6.0f, 6.0f); // вне треугольника           false
    Point P3(0.0f, 0.0f); // на вершине треугольника    false
    Point P4(2.5f, 2.5f); // на линии треугольника      false
    Point P5(3.0f, 0.0f); // на ребре AB                false
    Point P6(1.0f, 4.0f); // вне треугольника           false
    Point P7(2.5f, 1.25f); // внутри треугольника       true
    Point P8(5.0f, 5.0f); // вне треугольника           false
    Point P9(-1.0f, -1.0f); // вне треугольника         false
    Point P10(0.0f, 2.5f); // на линии CA               false

    std::cout << "P1 inside triangle ABC: " << (bsp(A, B, C, P1) ? "True" : "False") << std::endl;
    std::cout << "P2 inside triangle ABC: " << (bsp(A, B, C, P2) ? "True" : "False") << std::endl;
    std::cout << "P3 inside triangle ABC: " << (bsp(A, B, C, P3) ? "True" : "False") << std::endl;
    std::cout << "P4 inside triangle ABC: " << (bsp(A, B, C, P4) ? "True" : "False") << std::endl;
    std::cout << "P5 inside triangle ABC: " << (bsp(A, B, C, P5) ? "True" : "False") << std::endl;
    std::cout << "P6 inside triangle ABC: " << (bsp(A, B, C, P6) ? "True" : "False") << std::endl;
    std::cout << "P7 inside triangle ABC: " << (bsp(A, B, C, P7) ? "True" : "False") << std::endl;
    std::cout << "P8 inside triangle ABC: " << (bsp(A, B, C, P8) ? "True" : "False") << std::endl;
    std::cout << "P9 inside triangle ABC: " << (bsp(A, B, C, P9) ? "True" : "False") << std::endl;
    std::cout << "P10 inside triangle ABC: " << (bsp(A, B, C, P10) ? "True" : "False") << std::endl;

    return 0;
}