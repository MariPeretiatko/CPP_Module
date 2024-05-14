//
// Created by mperetia on 13.05.24.
//

#ifndef CPP_FIXED_H
#define CPP_FIXED_H

#include <iostream>


class Fixed {
private:
    int fixed_point_num;
    static const int bits = 8;
public:
    Fixed();
    Fixed(const Fixed &obj);
    Fixed& operator =(const Fixed& obj);
    ~Fixed();

    int getRawBits() const;
    void setRawBits( int const raw );
};


#endif //CPP_FIXED_H
