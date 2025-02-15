/*	exe02_06.cpp
 *  2025-02-15
 *  modified by Andy Hsu
 * 
 *  Write a program that has main() call a user-defined function that takes a distance
 *  in light years as an argument and then returns the distance in astronomical units.
 *  The program should request the light year value as input from the user and display
 *  the result, as shown in the following code:

    Enter the number of light years: 4.2
    4.2 light years = 265608 astronomical units.

 *  An astronomical unit is the average distance from the earth to the sun (about
 *  150,000,000 km or 93,000,000 miles), and a light year is the distance light travels in
 *  a year (about 10 trillion kilometers or 6 trillion miles). (The nearest star after the
 *  sun is about 4.2 light years away.) Use type double (as in Listing 2.4) and this conversion factor:
 *  1 light year = 63,240 astronomical units
 */
#include <iostream>
using namespace std;
double l_to_a(double light_year);
int main(void)
{
    double light_year, astro_unit;

    cout << "Enter the number of light years: ";
    cin >> light_year;
    astro_unit = l_to_a(light_year);
    cout << light_year << " light years = " << astro_unit << " astronomical units." << endl;

    return 0;
}

double l_to_a(double light_year)
{
    return light_year * 63240;
}