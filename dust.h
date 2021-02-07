#ifndef DUST_H
#define DUST_H

#include <iostream>
using namespace std;
class dust
{
    public:
        dust(){}
        dust(int num, double x, double y, int t) { id = num; xCoordinate = x; yCoordinate = y; type = t; str = 0; }
        virtual ~dust(){}

        double getXcoordinate() { return xCoordinate; }
        double getYcoordinate() { return yCoordinate; }
        int getType() { return type; }
        int getId() { return id; }
        double getStr() {return str;}

        void setXcoordinate(double newX) { xCoordinate = newX; }
        void setYcoordinate(double newY) { yCoordinate = newY; }
        void setType(int newT)  { type = newT;}
        void setID(int newID) { id = newID; }
        void setStr(double targetX, double targetY, int profile)
        {
            double d;
            d = (sqrt(pow(xCoordinate-targetX, 2.0) + pow(yCoordinate-targetY, 2.0)));
            str = (profile * 163 / pow(d, 2.0));
        }
        void display(){ cout<<"("<< id << ", "<<xCoordinate<<", "<<yCoordinate<<", "<<type<<")"<<endl;}

    private:
        int id;
        double xCoordinate;
        double yCoordinate;
        int type;
        double str;
};
#endif // DUST_H


