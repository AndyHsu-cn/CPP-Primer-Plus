/*	exe04_02.cpp
 *  2025-02-22
 *  modified by Andy Hsu
 * 
 *  Rewrite 04_04instr2.cpp, using the C++ string class instead of char arrays.
 */
#include <iostream>
#include <string>
int main(void)
{
    using namespace std;

    string name;
    string dessert;

    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Enter your favourite dessert: " << endl;
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << endl;

    return 0;
}