/*	exe05_02.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  Redo 05_04formore.cpp using a type array object instead of a built-in array and type
 *  long double instead of long long. Find the value of 100!
 */
#include <iostream>
#include <array>
const int ARSIZE = 101;
using namespace std;
int main(void)
{
    array<long double, ARSIZE> factorials;
    // long long factorials[ARSIZE];

    factorials[1] = factorials[0] = 1LL;
    for(int i = 2; i < ARSIZE; i++)
        factorials[i] = i * factorials[i - 1];
    cout.setf(ios_base::fixed, ios_base::floatfield);
    for(int i = 0; i < ARSIZE; i++)
        cout << i << "! = " << factorials[i] << endl;

    return 0;
}