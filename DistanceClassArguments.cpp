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
    // Every object shares this variable
    static int count;       // one variable per CLASS
public:
    // Constructor with no arguments
    Distance():feet(0), inches(0)
    {
        count ++;
    }

    // Constructor with two arguments
    Distance(int ft, float in):feet(ft), inches(in)
    {
        count ++;
    }

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
    Distance addDistanceToMe(Distance d1);
    int getCount()
    {
        return count;
    }

};
int Distance::count = 0;   // Static variable must be declared outside the class
// Prototypes
void ShowCurrentCount(Distance d1);

// Main Program Program
int main()
{
    // Create an instance "instantiate" the class
    Distance d1, d4;
    cout << "Count is " << d1.getCount() << endl;
    Distance d2(8, 2.0);
    cout << "Count is " << d2.getCount() << endl;
    Distance d3(2, 4.0);

    cout << "\nd1 = ";
    d1.showDistance();
    cout << "Count is " << d1.getCount() << endl;

    cout << "\nd2 = ";
    d2.showDistance();
    cout << "Count is " << d2.getCount() << endl;

    cout << "\nd3 = ";
    d3.showDistance();
    cout << "Count is " << d3.getCount() << endl;

    d4.addDistance(d2, d3);
    cout << "\nd4 = ";
    d4.showDistance();
    d4 = d4.addDistanceToMe(d2);
    cout << "\nNew d4 =";
    d4.showDistance();

    ShowCurrentCount(d4);


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
Distance Distance::addDistanceToMe(Distance d1)
{
    Distance temp;
    temp.inches = inches + d1.inches;
    if(temp.inches >= 12)
    {
        temp.inches -= 12.0;
        // temp.feet = 1;
        temp.feet ++;
    }
    temp.feet += feet + d1.feet;
    return temp;
}
void ShowCurrentCount(Distance d1)
{
    cout << "The current count in the class is: "
         << d1.getCount() << endl;
}