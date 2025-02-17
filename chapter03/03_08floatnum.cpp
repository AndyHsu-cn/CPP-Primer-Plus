/*	03_08floatnum.cpp
 *  2025-02-17
 *  modified by Andy Hsu
 * 
 *  floating-point types
 */
#include <iostream>
using namespace std;
int main(void)
{
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "tub = " << tub;
    cout << ", and a millon tubs = " << million * tub << ", " << endl
         << "and ten millon tubs = " << 10 * million * tub << endl;
    cout << "mint = " << mint;
    cout << ", and a millon mints = " << million * mint << ", " << endl
         << "and ten millon mints = " << 10 * million * mint << endl; 

    return 0;
}