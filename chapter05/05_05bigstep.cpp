/*	05_05bigstep.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  count as directed
 */
#include <iostream>
using namespace std;
int main(void)
{
    int by;

    cout << "Enter an integer: ";
    cin >> by;
    cout << "Counting by " << by << "s:" << endl;
    for(int i = 0; i < 100; i = i + by)
        cout << i << endl;

    return 0;
}