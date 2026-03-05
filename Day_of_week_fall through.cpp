// Day_of_week_fall through.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    int day_of_week;
        string day;

        cout << "Enter a number (1-7): ";
            cin >> day_of_week;
            switch (day_of_week) {
            case 1:
                day = "weekend";
                break;
                 
            case 2:
                
            case 3:
                
            case 4:
                
            case 5:
               
            case 6:
                day = "weekday";
                break;

            case 7:
                day = "weekend";
                break;

        }


    return 0;
}


