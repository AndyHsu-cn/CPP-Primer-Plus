/*	05_09forstr2.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  reversing an array
 */
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string word;
    char temp;
    int i, j;

    cout << "Enter a word: ";
    cin >> word;
    for(i = 0, j = word.size() - 1; i < j; i++, j--)
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << endl;
    cout << "Done." << endl;

    return 0;
}