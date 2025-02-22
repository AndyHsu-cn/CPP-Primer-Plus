/*	exe04_10.cpp
 *  2025-02-22
 *  modified by Andy Hsu
 * 
 *  Write a program that requests the user to enter three times for the 40-yd dash (or
 *  40-meter, if you prefer) and then displays the times and the average. Use an array
 *  object to hold the data. (Use a built-in array if array is not available.)
 */
#include <iostream>
#include <array>
using namespace std;
int main(void)
{
    array<double, 3> times;
    double tot = 0.0;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter time " << (i + 1) << endl;
        cin >> times[i];
        tot += times[i];
    }
    cout << times[0] << ", " << times[1] << ", " << times[2] << endl;
    cout << "average: " << tot / 3 << endl;
    
    return 0;
}