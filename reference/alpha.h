#ifndef ALPHA_H
#define ALPHA_H

#include <iostream>
using namespace std;

class alpha
{
    public:
        alpha();
        alpha(int i){id = i;}
        virtual ~alpha();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        void display(){cout<<"Alpha # "<<id<<endl;}


    private:
        int id;
};

#endif // ALPHA_H
