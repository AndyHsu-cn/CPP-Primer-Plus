/*	exe05_10.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  Write a program using nested loops that asks the user to enter a value for the
 *  number of rows to display. It should then display that many rows of asterisks, with
 *  one asterisk in the first row, two in the second row, and so on. For each row, the
 *  asterisks are preceded by the number of periods needed to make all the rows
 *  display a total number of characters equal to the number of rows.A sample run
 *  would look like this:

    Enter number of rows: 5
    ....*
    ...**
    ..***
    .****
    *****

 */
#include <iostream>
using namespace std;
int main(void)
{
    int rows;
    int i, j;

    cout << "Enter a value for the number of rows to display: ";
    cin >> rows;
    for(i = 1; i <= rows; i++)
    {
        // row i
        for(j = 1; j <= rows - i; j++)
            cout << ".";
        for(j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }   

    return 0;
}