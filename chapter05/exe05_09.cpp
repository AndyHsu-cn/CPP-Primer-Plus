/*	exe05_09.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  Write a program that matches the description of the program in Programming
 *  exe05_08.cpp, but use a string class object instead of an array. Include the string
 *  header file and use a relational operator to make the comparison test.
 */
#include <iostream>
#include <string>
// #include <cstring>
// const int ARSIZE = 20;
using namespace std;
int main(void)
{
    string words;
    //char words[ARSIZE];
    int cnt = 0;

    cout << "Enter words (to stop, type the word done):" << endl;
    cin >> words;
    while(words != "done")
    //while(strcmp(words, "done"))
    {
        cnt++;
        cin >> words;
    }
    cout << "You entered a total of " << cnt << " words." << endl;

    return 0;
} 