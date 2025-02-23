/*	05_16textin1.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  reading chars with a while loop
 */
#include <iostream>
using namespace std;
int main(void)
{
    char ch;
    int count = 0;

    cout << "Enter characters; enter # to quit:" << endl;
    cin >> ch;
    while(ch != '#')
    {
        cout << ch;
        count++;
        cin >> ch;
    }
    cout << endl << count << " characters." << endl;

    return 0;
}