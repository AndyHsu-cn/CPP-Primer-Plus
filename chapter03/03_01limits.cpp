/*	03_01limits.cpp
 *  2025-02-16
 *  modified by Andy Hsu
 * 
 *  use limits.h for older systems
 */
#include <iostream>
#include <climits>
int main(void)
{
    using namespace std;
    
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof(short) << " bytes." << endl;
    cout << "long is " << sizeof(long) << " bytes." << endl;
    cout << "long long is " << sizeof(long long) << " bytes." << endl;

    cout << "Maximum values: " << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    cout << "Minumun int values = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;

    return 0;
}