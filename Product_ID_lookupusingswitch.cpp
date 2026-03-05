// Product_ID_lookupusingswitch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
    int product_id;
    string product_description;

    // Ask the user to eneter a product ID
    cout << "Enter a product ID: ";
    cin >> product_id;

    switch (product_id == 1) {
    case 1: 
        
        product_description = "Hammer";
        
        break;
    case 2:

        product_description = "Box of Nails";

        break;

    default:

        product_description = " LOL You aint Getting shit";

        break;
    }
    

   


    cout << "Product Desciption: " << product_description << endl << endl;

    return 0;
}


