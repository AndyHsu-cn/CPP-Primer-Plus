/*	04_17use_new.cpp
 *  2025-02-19
 *  modified by Andy Hsu
 * 
 *  using the new operator
 */
#include <iostream>
using namespace std;
int main(void)
{
    int nights = 1001;
    int * pt = new int;
    double * pd;

    *pt = 1001;
    cout << "nights value = " << nights << ": location " << &nights << endl;
    cout << "int value = " << *pt << ": location " << pt << endl;
    pd = new double;
    *pd = 10000001.0;
    cout << "double value = " << *pd << ": location " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt) << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd) << ": size of *pd = " << sizeof(*pd) << endl;  
    // do not forget to delete
    delete pt;
    delete pd;

    return 0;
}