#include "CDist_class.hpp"

CDist::CDist(){ x = 0; y = 0;};
CDist::CDist(const int X, const int Y){x = X; y = Y;};
void CDist::up_date(const int X, const int Y){x = X; y = Y;};
int CDist::getX(){return x;};
int CDist::getY(){return y;};
void CDist::print(){std::cout<< x << " " << y << std::endl;};
