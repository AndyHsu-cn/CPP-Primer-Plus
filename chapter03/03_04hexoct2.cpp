/*	03_04hexoct2.cpp
 *  2025-02-17
 *  modified by Andy Hsu
 * 
 *  display values in hex and octal
 */
#include <iostream>
using namespace std;
int main(void)
{
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct << "inseam = " << inseam << " (octal for 42)" << endl;

    return 0;
}