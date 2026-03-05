// invooice_2.0_using_switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Display title
    cout << "The invoice Total Calculator 2.0\n\n";

    // Get input
    char customer_type;
    cout << "Enter customer type (r/w): ";
    cin >> customer_type;

    double subtotal;
    cout << "Enter subtotal: \t\t";
    cin >> subtotal;

    // set discount percent
    double discount_percent;
    switch (customer_type) {
    case 'r':
    case 'R':
        if (subtotal < 100) {
            discount_percent - .0;
        }
        else if (subtotal >= 100 && subtotal < 250)
        {
            discount_percent = .1;
        }
        else
        {
            discount_percent = .2;
        }
        break;

    case 'w':
    case 'W':
        if (subtotal < 500) {
            discount_percent - .4;
        }
       
        else
        {
            discount_percent = .5;
        }
        break;



    default: 
        discount_percent = 0;
        break;



    }


    // calculatre and round results
    double discount_amount = subtotal * discount_percent;
    discount_amount = round(discount_amount * 100) / 100;

    double invoice_total = subtotal - discount_amount;

    invoice_total = round(invoice_total) * 100 / 100;

    //display output

    cout << "Discount Percent: \t\t" << discount_percent << endl
        << "Discount Amount: \t\t" << discount_amount << endl
        << "Invoice Total: \t\t" << invoice_total<< endl;

    cout << "Good Bye!";



    return 0;
}


