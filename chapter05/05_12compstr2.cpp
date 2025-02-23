/*	05_12compstr2.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  comparing strings using c++ string class
 */
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string word = "?ate";

    for(char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;

    return 0;
}