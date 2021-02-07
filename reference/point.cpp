
#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;
class point
{
    public:
        point();
        point(double a, double b);
        virtual ~point();

        double Getx() { return x; }
        void Setx(double val) { x = val; }
        double Gety() { return y; }
        void Sety(double val) { y = val; }

        void display(){ cout<<"("<<x<<", "<<y<<")"<<endl;}
    private:
        double x;
        double y;
};

#endif // POINT_H
