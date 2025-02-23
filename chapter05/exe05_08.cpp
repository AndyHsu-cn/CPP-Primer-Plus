/*	exe05_08.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  Write a program that uses an array of char and a loop to read one word at a time
 *  until the word done is entered.The program should then report the number of
 *  words entered (not counting done).A sample run could look like this:

    Enter words (to stop, type the word done):
    anteater birthday category dumpster
    envy finagle geometry done for sure
    You entered a total of 7 words.
    
 *  You should include the cstring header file and use the strcmp() function to
 *  make the comparison test.
 */
#include <iostream>
#include <cstring>
const int ARSIZE = 20;
using namespace std;
int main(void)
{
    char words[ARSIZE];
    int cnt = 0;

    cout << "Enter words (to stop, type the word done):" << endl;
    cin >> words;
    while(strcmp(words, "done"))
    {
        cnt++;
        cin >> words;
    }
    cout << "You entered a total of " << cnt << " words." << endl;

    return 0;
} 