/*	03_06morechar.cpp
 *  2025-02-17
 *  modified by Andy Hsu
 * 
 *  the char type and int type contrasted
 */
#include <iostream>
int main(void)
{
    using namespace std;

    char ch = 'M';
    int i = ch;

    cout << "The ASCII code for " << ch << " is " << i << endl;
    ch = ch + 1;
    i = ch;
    cout << "THe ASCII code for " << ch << " is " << i << endl;
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    cout.put('!');
    cout << endl << "Done" << endl;

    return 0;
}