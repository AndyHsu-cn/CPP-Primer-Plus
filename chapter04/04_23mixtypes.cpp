/*	04_23mixtypes.cpp
 *  2025-02-22
 *  modified by Andy Hsu
 * 
 *  some type combinations
 */
#include <iostream>
using namespace std;
struct antarctica_years_end
{
    int year;
};
int main(void)
{
    antarctica_years_end s01, s02, s03;
    antarctica_years_end * pa = &s02;
    antarctica_years_end trio[3];
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    const antarctica_years_end ** ppa = arp;
    // automatic type deduction
    auto ppb = arp;

    s01.year = 1998;
    pa->year = 1999;
    trio[0].year = 2003;


    cout << trio->year << endl;
    #if 0
    // that's not ok
    arp[1]->year = 1990;
    // that's ok
    s02.year = 1990;
    #endif
    cout << arp[1]->year << std::endl;
    cout << (*ppa)->year << endl;
    cout << (*(ppb+1))->year << endl;

    return 0;
}
