#include "six.hpp"


int main() {
    std::cout<< "Enter 1 to find a dist" << std::endl;
    std::cout<< "Enter 2 to create new point by point and  dist" << std::endl;
    std::cout<< "Enter 3 to create new point by  dist and point" << std::endl;
    std::cout<< "Enter 0 to exit" << std::endl;
    
    int key;
    while(true){
        std::cin>> key;
        if (key != 0 && key != 1 && key != 2 && key !=3) {
            std::cout <<"Error! Unknown command!!!" << std::endl;
            return 0;
        }
        if(key == 0) return 0;
        if(key == 1){
            std::cout << "Enter integer coordinates of two points: " << std::endl;
            CPoint A, B;
            double x, y;
            std::cin >> x >> y;
            if( abs(round(x)-x) != 0 || abs(round(y)-y)!=0){
                std::cout << "Error! Not integer coordinates." << std::endl;
                return 0;
            }
            A.up_date(int(x), int(y));
            std::cin >> x >> y;
            if( abs(round(x)-x) != 0 || abs(round(y)-y)!=0){
                std::cout << "Error! Not integer coordinates." << std::endl;
                return 0;
            }
            B.up_date(x, y);
            CDist AB;
            AB = A - B;
            AB.print();
        }
        if(key == 2){
            std::cout << "Enter integer coordinates of point: " << std::endl;
            CPoint A;
            double x, y;
            std::cin >> x >> y;
            if( abs(round(x)-x) != 0 || abs(round(y)-y)!=0){
                std::cout << "Error! Not integer coordinates." << std::endl;
                return 0;
            }
            A.up_date(int(x), int(y));
            std::cout << "Enter dist: " << std::endl;
            std::cin >> x >> y;
            if( abs(round(x)-x) != 0 || abs(round(y)-y)!=0){
                std::cout << "Error! Not integer dist." << std::endl;
                return 0;
            }
            CDist AB;
            AB.up_date(x, y);
            CPoint B;
            B = A + AB;
            B.print();
        }
        if(key == 3){
            double x, y;
            std::cout << "Enter dist: " << std::endl;
            std::cin >> x >> y;
            if( abs(round(x)-x) != 0 || abs(round(y)-y)!=0){
                std::cout << "Error! Not integer dist." << std::endl;
                return 0;
            }
            CDist AB;
            AB.up_date(x, y);
            std::cout << "Enter integer coordinates of point: " << std::endl;
            CPoint A;
            std::cin >> x >> y;
            if( abs(round(x)-x) != 0 || abs(round(y)-y)!=0){
                std::cout << "Error! Not integer coordinates." << std::endl;
                return 0;
            }
            A.up_date(int(x), int(y));
            CPoint B;
            B = AB + A;
            B.print();
        }
    }
    
    return 0;
}
