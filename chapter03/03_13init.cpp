/*	03_13init.cpp
 *  2025-02-17
 *  modified by Andy Hsu
 * 
 *  type changes on initialization
 */
#include <iostream>
using namespace std;
int main(void)
{
    cout.setf(ios_base::fixed, ios_base::floatfield);

    float tree = 3;
    int guess(3.9832);
    int debt = 7.2E11;

    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;

    return 0;
}