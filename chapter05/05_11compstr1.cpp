/*	05_11compstr1.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  comparing strings using c arrays
 */
#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    char word[5] = "?ate";

    for(char ch = 'a'; strcmp(word, "mate"); ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;

    return 0;
}