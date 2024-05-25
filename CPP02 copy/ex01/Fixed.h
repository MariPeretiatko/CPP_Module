
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
    Fixed& operator =(const Fixed& obj);
    friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);
    ~Fixed();

    int getRawBits() const;
    void setRawBits( int const raw );

    float toFloat() const;
    int toInt() const;
};


#endif //CPP_FIXED_H
