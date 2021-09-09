#include "six.hpp"

const CDist operator-(CPoint A, CPoint B){
    CDist AB;
    
    AB.up_date((B.getX()-A.getX()), B.getY()-A.getY());
    return AB;
};

const CPoint operator+(CPoint A, CDist d){
    CPoint B;
      
    B.up_date(A.getX()+d.getX(), A.getY()+d.getY());
    
    return  B;
}

const CPoint operator+(CDist d, CPoint A){
    CPoint B;
    B.up_date(d.getX()+A.getX(), d.getY()+A.getY());
    return  B;
}



