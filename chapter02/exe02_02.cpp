/*	exe02_02.cpp
 *  2025-02-15
 *  modified by Andy Hsu
 * 
 *  Write a C++ program that asks for a distance in furlongs and converts it to yards.
 *  (One furlong is 220 yards.)
 */
#include <iostream>
int main(void)
{
    using namespace std;

    int furlong, yard;

    cout << "Enter a distance in furlongs: ";
    cin >> furlong;
    yard = 220 * furlong;
    cout << furlong << " furlong is " << yard << " year." << endl;

    return 0;
}