/*	05_17textin2.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  using cin.get(char)
 */
#include <iostream>
using namespace std;
int main(void)
{
    char ch;
    int count = 0;

    cout << "Enter characters; enter # to quit:" << endl;
    cin.get(ch);
    while(ch != '#')
    {
        cout << ch;
        count++;
        cin.get(ch);
    }
    cout << endl << count << " characters." << endl;

    return 0;
}