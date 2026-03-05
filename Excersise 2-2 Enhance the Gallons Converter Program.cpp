// Excersise 2-2 Enhance the Gallons Converter Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    std::cout << "Gallons Converter\n";

    double gallons;
    cout << "Enter gallons: ";
    cin >> gallons;

    double Liters = gallons * 3.78541;
    cout << "\nLiters: \t" << Liters;

    double quarts = gallons * 4;
    cout << "\nQuarts: \t" << quarts;

    double ounces = gallons * 128;
    cout << "\nOunces: \t" << ounces;

    cout << "\n\nBye! ";

    return 0;
}


