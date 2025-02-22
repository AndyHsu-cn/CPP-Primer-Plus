/*	04_15pointer.cpp
 *  2025-02-19
 *  modified by Andy Hsu
 * 
 *  our first pointer variable
 */
#include <iostream>
using namespace std;
int main(void)
{
    int update = 6;
    int * p_updates;

    p_updates = &update;
    cout << "Values: update = " << update
         << ", *p_updates = " << *p_updates << endl;
    cout << "Addresses: &update = " << &update
         << ", p_updates = " << p_updates << endl;
    *p_updates = *p_updates + 1;
    cout << "Now update = " << update << endl;

    return 0;
}