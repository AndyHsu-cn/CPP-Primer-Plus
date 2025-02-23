/*	05_18textin3.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  reading chars to end of file
 */
#include <iostream>
int main(void)
{
    using namespace std;

    char ch;
    int count = 0;
    
    cin.get(ch);
    while(cin.fail() == false)
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters." << endl;

    return 0;
}