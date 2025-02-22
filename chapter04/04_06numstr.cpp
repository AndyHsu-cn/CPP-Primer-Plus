/*	04_06numstr.cpp
 *  2025-02-18
 *  modified by Andy Hsu
 * 
 *  following number input with line input
 */
#include <iostream>
using namespace std;
int main(void)
{
    int year;
    char address[80];

    cout << "What year was your hourse built?" << endl;
    cin >> year;
    cin.get();
    cout << "What is its street address?" << endl;
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!" << endl;

    return 0;
}