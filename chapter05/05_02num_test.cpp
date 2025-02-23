/*	05_02num_test.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  use numeric test in for loop
 */
#include <iostream>
using namespace std;
int main(void)
{
    int limit;
    int i;

    cout << "Enter the starting countdown value: ";
    cin >> limit;
    for(i = limit; i; i--)
        cout << "i = " << i << endl;
    cout << "Done now that i = " << i << endl;

    return 0;
}