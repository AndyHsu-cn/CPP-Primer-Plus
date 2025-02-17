/*	03_07bondini.cpp
 *  2025-02-17
 *  modified by Andy Hsu
 * 
 *  using escape sequences
 */
#include <iostream>
using namespace std;
int main(void)
{
    cout << "\aOperation \"HyperHype\" is now activiated!\n";
    cout << "Enter your agent code: ________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "..." << endl;
    cout << "\aCode verified! Proceed with Plan Z3!" << endl;

    return 0;
}