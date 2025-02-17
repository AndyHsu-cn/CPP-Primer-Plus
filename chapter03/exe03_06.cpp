/*	exe03_06.cpp
 *  2025-02-17
 *  modified by Andy Hsu
 * 
 *  Write a program that asks how many miles you have driven and how many gallons
 *  of gasoline you have used and then reports the miles per gallon your car has gotten.
 *  Or, if you prefer, the program can request distance in kilometers and petrol in liters
 *  and then report the result European style, in liters per 100 kilometers.
 */
#include <iostream>
using namespace std;
int main(void)
{
    double miles, gallons;

    cout << "How many miles you have driven: ";
    cin >> miles;
    cout << "how many gallons of gasoline you have used: ";
    cin >> gallons;
    cout << "The miles per gallon your car has gotten is: " << miles / gallons << endl;

    return 0;
}