/*	03_12modulus.cpp
 *  2025-02-17
 *  modified by Andy Hsu
 * 
 *  uses % operator to convert lbs to stone
 */
#include <iostream>
using namespace std;
int main(void)
{
    const int LBS_PER_STN = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / LBS_PER_STN;
    int pounds = lbs % LBS_PER_STN;
    cout << lbs << " pounds are " << stone << " stone, "
         << pounds << " pound(s)." << endl;

    return 0;
}