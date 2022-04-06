//
// Created by Maikol Guzman Alan on 3/16/22.
//
#include <ostream>
#include <stdexcept>
#include "Utils.h"
#include "Container.h"

using namespace std;

int main() {
    cout << "Welcome to the UNA! (VIRTUAL)" << endl;
    cout << "Generics - Containers and Functions" << endl << endl;

    try {
        int numberList[5] = {10, 50, 30, 40, 20};
        int number = sizeof(numberList) / sizeof(numberList[0]);

        // calls template function
        cout << "TEMPLATE METHOD [myMaxValue]" << endl;
        cout << "The MAX value is: " << myMaxValue<int>(3, 7) << endl;  // Call myMax for int
        cout << "The MAX value is: " << myMaxValue<double>(3.0, 7.0) << endl; // call myMax for double
        cout << "The MAX value is: " << myMaxValue<char>('g', 'e') << endl << endl;   // call myMax for char

        // calls template function
        cout << "TEMPLATE METHOD [bubbleSort]" << endl;
        bubbleSort<int>(numberList, number);
        cout << "Sorted array: ";
        for (auto item: numberList) { cout << item << " "; }
        cout << endl << endl;

        // calls template class
        cout << "TEMPLATE CLASS [Container]" << endl;
        Container<char,char> charClass {'a','e'};
        Container<int,double> numClass {1,7.9};

    } catch (exception& ex) {
        cerr << ex.what() << '\n' << std::endl;
    }

}