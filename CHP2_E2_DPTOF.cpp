/*
Program:Distance Per Tank of Gas
Programmer Name:Montavius Spratley Burford
Date:2/9/2025 
Requirements:Write a program that calculates the number of miles per gallon the car gets. 
Display the result on screen
*/

#include <iostream>
using namespace std;

int main() {
    // Variables to hold the values
    double milesDriven = 375.0;
    double gallonsUsed = 15.0;

    // Calculating miles per gallon (MPG)
    double mpg = milesDriven / gallonsUsed;

    // Displaying the result
    cout << "Miles per gallon (MPG): " << mpg << endl;

    return 0;
}
