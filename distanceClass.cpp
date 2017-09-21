// File: distanceClass
// Created by Sean Bigler on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;
/* Task: Define a class Distance
 * that stores int feet and float inches
 * Two methods: setDistance -> Set information
 *              getDistance -> Set information with customer input
 *              showDistance -> Display values
 *              */
// Constants, Structs, Classes
class Distance
{
private:
    int feet;
    float inches;
public:
    int cm;
    void setDistance(int ft, float in)
    {
        feet = ft;
        inches = in;
    }
    void getDistance()
    {
        cout << "Enter feet:";
        cin >> feet;
        cout << "Enter inches:";
        cin >> inches;
    }
    void showDistance()     // Display
    {
        cout << "Distance is: " << feet << " ' " << inches << " \"" << endl;
    }
};

// Prototypes


// Main Program Program
int main()
{
    // Create an instance "instantiate" the class
    Distance d1, d2;
    d1.getDistance();
    d1.showDistance();
    d2.setDistance(6, 6.5);
    d2.showDistance();
    // Access a public data member
    d2.cm = 8;
    cout << "cm is " << d2.cm << endl;

    return 0;
}

// Function Definitions