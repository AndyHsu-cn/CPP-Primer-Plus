/*	exe03_01.cpp
 *  2025-02-17
 *  modified by Andy Hsu
 * 
 *  Write a short program that asks for your height in integer inches and then 
 *  converts your height to feet and inches. Have the program use the underscore
 *  character to indicate where to type the response.Also use a const symbolic
 *  constant to represent the conversion factor.
 */
#include <iostream>
using namespace std;
int main(void)
{
    const int FT_TO_INCH = 12;
    int height_inch, height_feet;

    cout << "Enter your height in integer inches: ";
    cin >> height_inch;
    height_feet = height_inch / FT_TO_INCH;
    height_inch = height_inch % FT_TO_INCH;
    cout << height_feet << " feets, " << height_inch << " inches." << endl;

    return 0;
}