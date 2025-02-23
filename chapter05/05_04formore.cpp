/*	05_04formore.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  more looping with for
 */
#include <iostream>
const int ARSIZE = 16;
using namespace std;
int main(void)
{
    long long factorials[ARSIZE];

    factorials[1] = factorials[0] = 1LL;
    for(int i = 2; i < ARSIZE; i++)
        factorials[i] = i * factorials[i - 1];
    for(int i = 0; i < ARSIZE; i++)
        cout << i << "! = " << factorials[i] << endl;

    return 0;
}