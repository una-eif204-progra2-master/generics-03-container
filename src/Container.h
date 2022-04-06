//
// Created by Maikol Guzman Alan on 4/6/22.
//
#include<iostream>
using namespace std;

#ifndef GENERICS_03_CONTAINER_CONTAINER_H
#define GENERICS_03_CONTAINER_CONTAINER_H

template <class T, class U>
class Container {
private:
    T objectX;
    U objectY;
public:
    Container() {
        cout<<"Constructor Called"<<endl;
    }

    Container(T objectX, U objectY) : objectX(objectX), objectY(objectY) {
        cout<<"Constructor with params called"<<endl;
        cout<<"Object X: " << objectX <<endl;
        cout<<"Object Y: " << objectY <<endl;
    }
};

#endif //GENERICS_03_CONTAINER_CONTAINER_H
