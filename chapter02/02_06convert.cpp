/*	02_06convert.cpp
 *  2025-02-15
 *  modified by Andy Hsu
 * 
 *  converts stone to pounds
 */
#include <iostream>
int stonetolb(int sts);
int main(void)
{
    using namespace std;

    int stone;

    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;

    return 0;
}

int stonetolb(int sts)
{
    return 14 * sts;
}