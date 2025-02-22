/*	04_19addpntrs.cpp
 *  2025-02-22
 *  modified by Andy Hsu
 * 
 *  pointer addition
 */
#include <iostream>
using namespace std;
int main(void)
{
    double wages[3] = {10000.0, 20000.0, 30000.0};
    double * pw = wages;
    short stacks[3] = {3, 2, 1};
    short * ps = &stacks[0];

    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    cout << "add 1 to the pw pointer:" << endl;
    pw = pw + 1;
    cout << "pw = " << pw << ", *pw = " << *pw << endl;

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    cout << "add 1 to the ps pointer:" << endl;
    ps = ps + 1;
    cout << "ps = " << ps << ", *ps = " << *ps << endl << endl;

    cout << "access two elements with array notation" << endl;
    cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation" << endl;
    cout << "*stacks = " << *stacks << ", *(stack + 1) = " << *(stacks + 1) << endl;

    return 0;
}