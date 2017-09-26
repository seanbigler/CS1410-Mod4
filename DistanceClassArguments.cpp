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
    // Constructor with no arguments
    Distance():feet(0), inches(0)
    {/*Empty body*/}

    // Constructor with two arguments
    Distance(int ft, float in):feet(ft), inches(in)
    {/* Empty body*/}

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
    void addDistance(Distance d1, Distance d2);     // Inside the class

};

// Prototypes


// Main Program Program
int main()
{
    // Create an instance "instantiate" the class
    Distance d1, d4;
    Distance d2(8, 2.0);
    Distance d3(2, 4.0);

    cout << "\nd1 = ";
    d1.showDistance();

    cout << "\nd2 = ";
    d2.showDistance();

    cout << "\nd3 = ";
    d3.showDistance();

    d4.addDistance(d2, d3);
    cout << "\nd4 = ";
    d4.showDistance();


    return 0;
}

// Function Definitions
// Template when belongs to class: CLASSNAME::Function_name()
// The scope resolution operator is ::
// 1) Declare prototype inside class
// 2) Definition is outside class
// 3) Use the scope resolution operator ::
void Distance::addDistance(Distance d1, Distance d2)    // :: means that it belongs to the class
{
    inches = d1.inches + d2.inches;
    feet = 0;
    if(inches >= 12.0)
    {
        inches -= 12.0;     // Check for extra foot
        feet++;

    }
    feet += d1.feet + d2.feet;  // Add feet
}