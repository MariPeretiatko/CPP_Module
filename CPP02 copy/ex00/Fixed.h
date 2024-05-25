
#ifndef CPP_FIXED_H
#define CPP_FIXED_H

#include <iostream>


class Fixed {
private:
    int fixed_point_num;
    static const int bits;
public:
    Fixed();
    Fixed(const Fixed &obj);
    ~Fixed();
    Fixed& operator =(const Fixed& obj);

    int getRawBits() const;
    void setRawBits( int const raw );
};


#endif //CPP_FIXED_H
