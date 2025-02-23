/*	05_13while.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  introducing the while loop
 */
#include <iostream>
const int ARSIZE = 20;
using namespace std;
int main(void)
{
    char name[ARSIZE];
    int i = 0;

    cout << "Your first name, please: ";
    cin >> name;
    cout << "Here is your name, verticalized and ASCIIized:" << endl;
    while(name[i] != '\0')
    {
        cout << name[i] << ": " << (int)name[i] << endl;
        i++;
    }

    return 0;
}