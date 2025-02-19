/*	03_03hexoct1.cpp
 *  2025-02-16
 *  modified by Andy Hsu
 * 
 *  shows hex and octal literals
 */
#include <iostream>
int main(void)
{
    using namespace std;

    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (42 in decimal)" << endl;
    cout << "waist = " << waist << " (0x42 in hex)" << endl;
    cout << "inseam = " << inseam << " (042 in octal)" << endl;

    return 0;
}