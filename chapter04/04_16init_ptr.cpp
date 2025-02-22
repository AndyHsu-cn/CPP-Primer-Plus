/*	04_16init_ptr.cpp
 *  2025-02-19
 *  modified by Andy Hsu
 * 
 *  initialize a pointer
 */
#include <iostream>
using namespace std;
int main(void)
{
    int higgens = 5;
    int * pt = &higgens;

    cout << "Value of higgens = " << higgens
         << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt
         << "; Value of pt = " << pt << endl;

    return 0;
}