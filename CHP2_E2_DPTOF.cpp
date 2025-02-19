/*
Program:Distance Per Tank of Gas
Programmer Name:Montavius Spratley Burford
Date:2/9/2025 
Requirements:Write a program that calculates the number of miles per gallon the car gets. 
Display the result on screen
*/

#include <iostream>
#include <iostream>
using namespace std;

int main() {
    // Variables to hold user input
    double milesDriven;
    double gallonsUsed;

    // Getting the user's input
    cout << "Enter the number of miles driven: ";
    cin >> milesDriven;
    cout << "Enter the number of gallons of gas used: ";
    cin >> gallonsUsed;

    // Calculating miles per gallon (MPG)
    double mpg = milesDriven / gallonsUsed;

    // Displaying the result
    cout << "Miles per gallon (MPG): " << mpg << endl;

    return 0;
}
