#ifndef six_hpp
#define six_hpp


#include <iostream>
#include <cmath>

//#include "CPoint_class.hpp"
#include "CDist_class.hpp"



const CDist operator-(CPoint, CPoint);
const CPoint operator+(CPoint, CDist);
const CPoint operator+(CDist, CPoint);


#endif /* six_hpp */
