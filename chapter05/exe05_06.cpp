/*	exe05_06.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  Do Programming exe05_06.cpp, but use a two-dimensional array to store input for 3
 *  years of monthly sales. Report the total sales for each individual year and for the
 *  combined years.
 */
#include <iostream>
#include <string>
const int YEARS = 3;
const int MONTH = 12;
using namespace std;
int main(void)
{
    const string months[MONTH] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"  
    };
    int sales[YEARS][MONTH];
    int tot = 0;
    int subtot;
    int i, j;

    for(i = 0; i < YEARS; i++)
    {
        subtot = 0;
        for(j = 0; j < MONTH; j++)
        {
            cout << "Enter number of books saled in year " << i + 1 << ", month " << months[j] << ": ";
            cin >> sales[i][j];
            subtot += sales[i][j];
        }
        cout << "Subtotal sales for the year: " << i + 1 << ": " << subtot << endl;
        tot += subtot;
    }
    cout << "Total sales for the " << YEARS << " year: " << tot << endl;

    return 0;
}