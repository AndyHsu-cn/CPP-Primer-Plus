/*	04_18arraynew.cpp
 *  2025-02-19
 *  modified by Andy Hsu
 * 
 *  using the new operator for arrays
 */
#include <iostream>
using namespace std;
int main(void)
{
    // space for 3 doubles
    double * p3 = new double[3];

    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << "." << endl;
    p3 = p3 + 1;
    cout << "Now p3[0] is " << p3[0] << " and p3[1] is "
         << p3[1] << endl;
    p3 = p3 - 1;
    delete[] p3;

    return 0;
}