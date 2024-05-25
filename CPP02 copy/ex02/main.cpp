#include "Fixed.h"
int main()
{
//    Fixed a;
//    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//    std::cout << a << std::endl;
//    std::cout << ++a << std::endl;
//    std::cout << a << std::endl;
//    std::cout << a++ << std::endl;
//    std::cout << a << std::endl;
//    std::cout << b << std::endl;
//    std::cout << Fixed::max( a, b ) << std::endl;
//
//    Fixed c(0.0f);
//    Fixed d(15);
//    std::cout << c/d << std::endl;
//    std::cout << d/c << std::endl;

    Fixed a(10.5f);
    Fixed b(20.25f);
    Fixed c(10.5f);

    std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;

    std::cout << "a == c: " << (a == c ? "True" : "False") << std::endl;
    std::cout << "a != b: " << (a != b ? "True" : "False") << std::endl;
    std::cout << "a > b: " << (a > b ? "True" : "False") << std::endl;
    std::cout << "a < b: " << (a < b ? "True" : "False") << std::endl;
    std::cout << "a >= c: " << (a >= c ? "True" : "False") << std::endl;
    std::cout << "b <= c: " << (b <= c ? "True" : "False") << std::endl;

    // Тесты для арифметических операторов
    Fixed d = a + b;
    std::cout << "a + b: " << d << std::endl;

    Fixed e = b - a;
    std::cout << "b - a: " << e << std::endl;

    Fixed f = a * c;
    std::cout << "a * c: " << f << std::endl;

    Fixed g = b / a;
    std::cout << "b / a: " << g << std::endl;

    // Тесты для операторов инкремента и декремента
    Fixed h = a;
    std::cout << "h (before increment): " << h << std::endl;
    std::cout << "++h: " << ++h << std::endl;
    std::cout << "h++: " << h++ << std::endl;
    std::cout << "h (after post-increment): " << h << std::endl;

    Fixed i = b;
    std::cout << "i (before decrement): " << i << std::endl;
    std::cout << "--i: " << --i << std::endl;
    std::cout << "i--: " << i-- << std::endl;
    std::cout << "i (after post-decrement): " << i << std::endl;

    // Тесты для min и max
    std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
    std::cout << "min(a, c): " << Fixed::min(a, c) << std::endl;
    std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
    std::cout << "max(a, c): " << Fixed::max(a, c) << std::endl;
    return 0;
}