/*	exe02_03.cpp
 *  2025-02-15
 *  modified by Andy Hsu
 * 
 *  Write a C++ program that uses three user-defined functions (counting main() as
 *  one) and produces the following output:

    Three blind mice
    Three blind mice
    See how they run
    See how they run
    
 *  One function, called two times, should produce the first two lines, and the remaining function, also called twice,
 *  should produce the remaining output.
 */
#include <iostream>
using namespace std;
void three_blind_mice(void);
void how_they_run(void);
int main(void)
{
    three_blind_mice();
    three_blind_mice();
    how_they_run();
    how_they_run();

    return 0;
}

void three_blind_mice(void)
{
    cout << "Three blind mice" << endl;
}

void how_they_run(void)
{
    cout << "See how they run" << endl;
}