/*	03_10arith.cpp
 *  2025-02-17
 *  modified by Andy Hsu
 * 
 *  some C++ arithmetic
 */
#include <iostream>
using namespace std;
int main(void)
{
    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;

    return 0;
}