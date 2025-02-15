/*	02_02carrots.cpp
 *  2025-02-15
 *  modified by Andy Hsu
 * 
 *  food processing program
 */
#include <iostream>
int main(void)
{
    using namespace std;

    int carrots;

    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;
    cout << "Crunch, Now I have " << carrots << " carrots." << endl;

    return 0;
}