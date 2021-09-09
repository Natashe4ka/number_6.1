#include <iostream>
#include <cmath>
#include "CPoint_class.hpp"
class CDist{
private:

    int x;
    int y;
public:
    CDist();
    CDist(const int, const int );
    void up_date(const int , const int );
    int getX();
    int getY();
    void print();
};
