/*	exe05_03.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  Write a program that asks the user to type in numbers.After each entry, the program should report the cumulative sum of the entries to date.The program should
 *  terminate when the user enters 0.
 */
#include <iostream>
using namespace std;
int main(void)
{
    int num;
    int tot = 0;

    cout << "Enter numbers: ";
    cin >> num;
    while(num != 0)
    {
        tot += num;
        cout << "Tot = " << tot << endl;
        cout << "Enter numbers: ";
        cin >> num;
    }
    cout << "Done." << endl;

    return 0;
}