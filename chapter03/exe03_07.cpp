/*	exe03_07.cpp
 *  2025-02-17
 *  modified by Andy Hsu
 * 
 *  Write a program that asks you to enter an automobile gasoline consumption figure
 *  in the European style (liters per 100 kilometers) and converts to the U.S. style of
 *  miles per gallon. Note that in addition to using different units of measurement, the
 *  U.S. approach (distance / fuel) is the inverse of the European approach (fuel / distance). Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters.Thus, 19
 *  mpg is about 12.4 l/100 km, and 27 mpg is about 8.7 l/100 km.
 */
#include <iostream>
const double LITER_PER_GALLON = 3.785;
const double MILE_PER_100KM   = 62.14;
using namespace std;
int main(void)
{
    double eur_style, us_style;

    cout << "Enter an automobile gasoline consumption figure " 
            "in the European style (liters per 100 kilometers): ";
    // eur_style (L)    -->     eur_style / LITER_PER_GALLON  (gallon)
    // 100KM            -->     MILE_PER_100KM   (miles)
    cin >> eur_style;
    us_style = MILE_PER_100KM * LITER_PER_GALLON / eur_style;
    cout << "US style: " << us_style << endl;

    return 0;
}