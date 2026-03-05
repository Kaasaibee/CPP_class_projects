// Exercise 2-3 Enhance the Guest Book program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare variables
    string firstName, middleInitial, lastName;
    string address, city, state, postalCode, country;

    cout << "Guest Book\n\n";

    // Get user input
    cout << "First name: ";
    getline(cin, firstName);

    cout << "Middle initial: ";
    getline(cin, middleInitial);

    cout << "Last name: ";
    getline(cin, lastName);

    cout << "Address: ";
    getline(cin, address);

    cout << "City: ";
    getline(cin, city);

    cout << "State: ";
    getline(cin, state);

    cout << "Postal code: ";
    getline(cin, postalCode);

    cout << "Country: ";
    getline(cin, country);

    // Display formatted entry
    cout << "1ENTRY\n";
    cout << firstName << " " << middleInitial << ". " << lastName << endl;
    cout << address << endl;
    cout << city << ", " << state << " " << postalCode << endl;
    cout << country << endl;

    return 0;
}



