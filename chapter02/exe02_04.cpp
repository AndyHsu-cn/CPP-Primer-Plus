/*	exe02_04.cpp
 *  2025-02-15
 *  modified by Andy Hsu
 * 
 *  Write a program that asks the user to enter his or her age.The program then should
 *  display the age in months:

    Enter your age: 29
    Your age in months is 348.
 */
#include <iostream>
int main(void)
{
    using namespace std;

    int age_year, age_month;

    cout << "Enter your age: " << endl;
    cin >> age_year;
    age_month = age_year * 12;
    cout << "Your age in months is " << age_month << "." << endl;

    return 0;
}