/*	04_14address.cpp
 *  2025-02-19
 *  modified by Andy Hsu
 * 
 *  using the & operator to find addresses
 */
#include <iostream>
using namespace std;
int main(void)
{
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts << " and donuts address = "
         << &donuts << endl;
    cout << "cups value = " << cups << " and cups address = "
         << &cups << endl;

    return 0;
}