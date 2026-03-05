// if_statments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{

    int score = 75;

    if (score >= 90) {
        cout << "A";
    }
    else if (score >= 80) {
        cout << "B";
    }
    else if (score >= 70) {
        cout << "C";
    }
    else
        cout << "Fail";




   /* string name = "Jones";
    string name2 = "jones";
     
    if (name == "Jones") {
        cout << "name matches Jones exactly\n";
    }

    if (name != name2) {
        cout << "name and name2 are not equal\n";
    }

     char choice = 'Y';

    if (tolower(choice) == 'y') {
        cout << "choice is either y or Y\n";
    }*/

    /*int counter = 4;
    if (counter < 5) {
        cout << "counter greater than 5\n";
    }
    cout << "end of the program\n";*/

//    // simple if (one condition only)
//    if (boolean_expression){
//        //runs if true condtion
//    
//}
//    if (boolean_expression) {
//
//        //runs if true condtion
//    }
//    else if (boolean_expression) {
//        // checks multiple condition
//
//        //runs if the condition is false
//    }
//    else if (boolean_expression) {
//        // checks multiple condition
//
//    }
//    else {
//
//
//    }

return 0;

}
