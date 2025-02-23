/*	05_06forstr1.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  using for with a string
 */
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string word;

    cout << "Enter a word: ";
    cin >> word;
    for(int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    cout << endl << "Bye." << endl;

    return 0;
}