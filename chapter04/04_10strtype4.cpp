/*	04_10strtype4.cpp
 *  2025-02-19
 *  modified by Andy Hsu
 * 
 *  line input
 */
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(void)
{
    char charr[20];
    string str;

    cout << "Length of string in charr before input: "
         << strlen(charr) << endl;
    cout << "Length of string in str befor input: "
        << str.size() << endl;
    cout << "Enter a line of text:" << endl;
    cin.getline(charr, 20);
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:" << endl;
    // no length specifier
    getline(cin, str);
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr before input: "
         << strlen(charr) << endl;
    cout << "Length of string in str befor input: "
        << str.size() << endl;

    return 0;
}