/*	exe05_01.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  Write a program that requests the user to enter two integers.The program should
 *  then calculate and report the sum of all the integers between and including the two
 *  integers.At this point, assume that the smaller integer is entered first. For example, if
 *  the user enters 2 and 9, the program should report that the sum of all the integers
 *  from 2 through 9 is 44.
 */
#include <iostream>
using namespace std;
int main(void)
{
    int start, end, i;
    int tot = 0;

    cout << "Enter a integer for start: ";
    cin >> start;
    cout << "Enter a integer for end: ";
    cin >> end;
    i = start;
    while(i <= end)
    {
        tot += i;
        ++i;
    }
    cout << "the sum of all the integers from " << start << " through " 
         << end << " is " << tot << endl;

    return 0;
}