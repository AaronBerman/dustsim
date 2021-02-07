//            id number
//            type of signal
//            signal strength
//            private x,y locations
#ifndef DUST_H
#define DUST_H

#include <iostream>
using namespace std;
class dust
{
    public:
        dust(){}
        dust(int num) { id = num; }
        dust(int num, double x, double y){id = num, xCoordinate = x; yCoordinate = y; }
        dust(int num, double x, double y, int t) { id = num; xCoordinate = x; yCoordinate = y; type = t; }
        virtual ~dust(){}

        double getXcoordinate() { return xCoordinate; }
        double getYcoordinate() { return yCoordinate; }
        int getType() { return type; }
        int getId() { return id; }

        void setXcoordinate(double newX) { xCoordinate = newX; }
        void setYcoordinate(double newY) { yCoordinate = newY; }
        void setType(int newT)  { type = newT;}
        void setID(int newID) { id = newID; }

        void display(){ cout<<"("<< id << ", "<<xCoordinate<<", "<<yCoordinate<<", "<< type <<")"<< endl;}

    private:
        int id;
        double xCoordinate;
        double yCoordinate;
        int type;
};

#endif // DUST_H


