/*	05_19textin4.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  reading chars with cin.get()
 */
#include <iostream>
int main(void)
{
    using namespace std;

    int ch;
    int count = 0;
    
    while((ch = cin.get()) != EOF)
    {
        cout.put((char)ch);
        ++count;
    }
    cout << endl << count << " characters." << endl;

    return 0;
}