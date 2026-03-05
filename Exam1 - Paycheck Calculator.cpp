// Exam1 - Paycheck Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Program Name: Paycheck Caculator Author: [RJ West]
▪ Date: [02/16/26]
▪ Description: A program to calculate gross pay, tax amount, and takehome pay for an employee.
*/

#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std; 

int main()
{
    
    // Title of the program
    std::cout << "Paycheck Calculator\n\n";

    //Created a variable that will retreive workhours as a double (number with decimals)
    double workhours;
    cout << "How many hours have you worked?   ";
        cin >> workhours;
        
    // variable created to ask user for its payreate
        double payrate;
        cout << "Enter your hourly pay rate:  $";
        cin >> payrate;

        //equation to calculate gross pay with it also rounding to two decimal places
        double grosspay = workhours * payrate;
        grosspay = round(grosspay * 100) / 100;

        //variable created for its fixed tax rate
        double taxrate = 0.18 * 100.0;

        /*created another variable called tax amount that is roundded for two decimal places that uses the calculated grosspay
        times the fixed tax rate*/
        double taxamount = (grosspay * taxrate) / 100;
        taxamount = round(taxamount * 100) / 100;

        /*takes the takehomepay by using the gross pay subtraced by taxamount it will round to two decimal places*/
        double takehomepay = (grosspay - taxamount);
        takehomepay = round(takehomepay * 100) / 100;

        /*prints out all of the calcualted3 variables used for the user  formatted depedning on 
        if it is money or percentage value*/
        cout << "Gross Pay:            $" << grosspay << endl;
        cout << "Taxrate:              " << taxrate << "%" << endl;
        cout << "Tax Amount:           $" << taxamount << endl;
        cout << "Take Home Pay:        $" << takehomepay << endl;

       //end print
        cout << "Bye!";


        return 0;

}

