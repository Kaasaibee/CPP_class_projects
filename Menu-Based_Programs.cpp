// Menu-Based_Programs.cpp : This file contains the 'main' function. Program execution begins and ends there.
// list all movies  | add a movie | exit

#include <iostream>
#include <string>


using namespace std;

int main()

{
    // Display menu options
    
    int menu_item;
    
    cout << "1. List all movies" << endl;

    cout << "2. Add a movie" << endl;

    cout << "3. Exit " << endl;

    // Get User Input
    cout << "\nEnter menu option: ";
    cin >> menu_item;

    switch (menu_item) {
    case 1:
        
        cout << "MOVIE LIST";
        break;
    case 2:

        cout << "Add MOVIE";
        break;
    case 3:

        cout << "BYE!";
        break;

    default: 
        cout << "Invalid Menu Item";
            break;

    }
    return 0;
}


