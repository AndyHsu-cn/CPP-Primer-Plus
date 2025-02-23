/*	05_15dowhile.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  exit-condition loop
 */
#include <iostream>
using namespace std;
int main(void)
{
    int n;

    cout << "Enter numbers in the range of 1-10 to find ";
    cout << "my favorite number" << endl;
    do
    {
        cin >> n;
    } while (n != 7);
    cout << "Yes, 7 is my favorite." << endl;

    return 0;
}