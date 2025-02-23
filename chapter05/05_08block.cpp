/*	05_08block.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  use a block statement
 */
#include <iostream>
using namespace std;
int main(void)
{
    double number;
    double sum = 0.0;

    cout << "The Amazing Accounto will sum and average ";
    cout << "five numbers for you." << endl;
    cout << "Please enter five values:" << endl;
    for(int i = 1; i <= 5; i++)
    {
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << "." << endl;
    cout << "The Amazing Accounto bids you adieu!" << endl;

    return 0;
}