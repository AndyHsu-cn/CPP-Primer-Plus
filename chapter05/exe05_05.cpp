/*	exe05_05.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  You sell the book C++ for Fools.Write a program that has you enter a year’s worth
 *  of monthly sales (in terms of number of books, not of money).The program should
 *  use a loop to prompt you by month, using an array of char * (or an array of
 *  string objects, if you prefer) initialized to the month strings and storing the input
 *  data in an array of int.Then, the program should find the sum of the array contents
 *  and report the total sales for the year.
 */
#include <iostream>
#include <string>
const int MONTH = 12;
using namespace std;
int main(void)
{
    const string months[MONTH] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"  
    };
    int sales[MONTH];
    int tot = 0;
    int i = 0;

    while(i < MONTH)
    {
        cout << "Enter number of books saled in " << months[i] << ": ";
        cin >> sales[i];
        tot += sales[i];
        i++;
    }
    cout << "Total sales for the year: " << tot << endl;

    return 0;
}