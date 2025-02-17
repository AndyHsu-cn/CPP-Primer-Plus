/*	03_09fltadd.cpp
 *  2025-02-17
 *  modified by Andy Hsu
 * 
 *  precision problems with float
 */
#include <iostream>
using namespace std;
int main(void)
{
    float a = 2.34E22f;
    float b = a + 1.0f;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "b - a = " << b - a << endl;

    return 0;
}