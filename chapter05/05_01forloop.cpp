/*	05_01forloop.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  introducing the for loop
 */
#include <iostream>
using namespace std;
int main(void)
{
    int i;

    for(i = 0; i < 5; i++)
        cout << "C++ knows loop." << endl;
    cout << "C++ knows when to stop." << endl;

    return 0;
}