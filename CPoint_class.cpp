#include "CPoint_class.hpp"

CPoint::CPoint(){ x = 0; y = 0;};
CPoint::CPoint(const int X, const int Y){x = X; y = Y;};
void CPoint::up_date(const int X, const int Y){x = X; y = Y;};
int CPoint::getX(){return x;};
int CPoint::getY(){return y;};
void CPoint::print(){std::cout<< x << " " << y << std::endl;};

 
