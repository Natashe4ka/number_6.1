#include <iostream>

class CPoint{
private:
    int x;
    int y;
public:
    CPoint();
    CPoint(const int, const int );
    void up_date(const int , const int );
    int getX();
    int getY();
    void print();
};


