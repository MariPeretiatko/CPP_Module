#ifndef CPP_FIXED_H
#define CPP_FIXED_H

#include <iostream>
#include <cmath>


class Fixed {
private:
    int fixed_point_num;
    static const int bits;
public:
    Fixed();
    Fixed(const int number);
    Fixed(const float number);
    Fixed(const Fixed &obj);
    ~Fixed();

    int getRawBits() const;
    void setRawBits( int const raw );

    float toFloat() const;
    int toInt() const;

    Fixed& operator =(const Fixed& obj);
    friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);
    bool operator ==(const Fixed& obj) const;
    bool operator !=(const Fixed& obj) const;
    bool operator >(const Fixed& obj) const;
    bool operator <(const Fixed& obj) const;
    bool operator >=(const Fixed& obj) const;
    bool operator <=(const Fixed& obj) const;
    Fixed operator+(const Fixed& obj);
    Fixed operator-(const Fixed& obj);
    Fixed operator*(const Fixed& obj);
    Fixed operator/(const Fixed& obj);

    Fixed& operator++();
    Fixed& operator--();

    Fixed operator++(int);
    Fixed operator--(int);

    static Fixed& min(Fixed& obj1, Fixed& obj2);
    static const Fixed& min(const Fixed& obj1,const Fixed& obj2);

    static Fixed& max(Fixed& obj1, Fixed& obj2);
    static const Fixed& max(const Fixed& obj1,const Fixed& obj2);
};


#endif //CPP_FIXED_H
