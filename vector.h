#include <iostream>
#include <cmath>
 namespace vecmath {
    class Vector{
        public:
            double x, y;
            void mirror(){
                x = -x;
                y = -y;
                };
                
            double len(){
                double l;
                l = sqrt(x*x + y*y);
                return l;
                };
            
            double ang(){
                double fi;
                fi = asin(x/(this -> len()))*(180/3.14);
                return fi;
                };
            
            void report(){
                using namespace std;
                cout << " X: " << x << " Y: " << y << '\n';
                this -> mirror();
                cout << " Mirrored: X: " << x << " Y: " << y << '\n';
                this -> mirror();
                cout << " Lenght: " << this -> len() << '\n';
                cout << " Angle: " << this -> ang() << '\n';
                };
            
            
            Vector(double a = 1, double b = 1){
                x = a;
                y = b;
                };
    
            ~Vector(){std::cout <<"Vector annigilatied\n";}
    };
 }