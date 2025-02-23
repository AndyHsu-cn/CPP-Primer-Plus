/*	05_03express.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  values of expressions
 */
#include <iostream>
using namespace std;
int main(void)
{
    int x;

    cout << "The expression x = 100 has the value " << (x = 100) << endl;
    cout << "Now x = " << x << endl;
    cout << "The expression x < 3 has the value " << (x < 3) << endl;
    cout << "The expression x > 3 has the value " << (x > 3) << endl;  
    // a newer C++ feature
    cout.setf(ios_base::boolalpha);
    cout << "The expression x < 3 has the value " << (x < 3) << endl;
    cout << "The expression x > 3 has the value " << (x > 3) << endl;

    return 0;
}