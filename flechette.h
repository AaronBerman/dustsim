#ifndef FLECHETTE_H
#define FLECHETTE_H

#include "dust.h"
#include <iostream>
#include <list>
#include <iterator>

using namespace std;
class flechette
{
    public:

        flechette(){}
        flechette(int num) { id = num; }
        flechette(int num, double x, double y){id = num, xCoordinate = x; yCoordinate = y; list<int> myDust;}
        virtual ~flechette(){}

        double getFlechetteXcoordinate() { return xCoordinate; }
        double getFlechetteYcoordinate() { return yCoordinate; }
        int getFlechetteId() { return id; }

        void setFlechetteXcoordinate(double newX) { xCoordinate = newX; }
        void setFlechetteYcoordinate(double newY) { yCoordinate = newY; }
        void setFlechetteID(int newID) { id = newID; }

       void addToInRange(const int& id) {dustId.push_back(id);}

        //get list of dust that are close
        int getInRange()
        {
            list<int>::iterator iter;
            iter = dustId.begin();
            while (iter != dustId.end())
            {
                iter++;
            }
            return id;
        };

        void display(){ cout << "(" << id << ", " << xCoordinate << ", "<< yCoordinate << ")"<<endl;}

    list<int> dustId;
    private:
        int id;
        double xCoordinate;
        double yCoordinate;
};
#endif // FLECHETTE_H


