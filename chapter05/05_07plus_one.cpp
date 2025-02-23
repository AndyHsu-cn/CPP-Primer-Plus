/*	05_07plus_one.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  the increment operator
 */
#include <iostream>
using namespace std;
int main(void)
{
    int a = 20;
    int b = 20;

    cout << "a = " << a << ": b = " << b << endl;
    cout << "a++ = " << a++ << ": ++b = " << ++b << endl;
    cout << "a = " << a << ": b = " << b << endl;

    return 0;
}