// File: PointClass
// Created by Sean Bigler on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
class Point
{
private:
    // Class variables (Data members)
    float x;        // x-coordinate
    float y;        // y-coordinate
public:
    // Constructor
    Point():x(0.0), y(0.0)
    {}
    // Methods
    void showPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
    void updatePoint(float xnew, float ynew)
    {
        x = xnew;
        y = ynew;
    }
};

// Prototypes


// Main Program Program
int main()
{
    Point p1;
    p1.showPoint();     // Display values
    p1.updatePoint(2.5, 3.9);
    p1.showPoint();

    return 0;
}

// Function Definitions