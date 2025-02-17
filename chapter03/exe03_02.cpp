/*	exe03_02.cpp
 *  2025-02-17
 *  modified by Andy Hsu
 * 
 *  Write a short program that asks for your height in feet and inches and your weight
 *  in pounds. (Use three variables to store the information.) Have the program report
 *  your body mass index (BMI).To calculate the BMI, first convert your height in feet
 *  and inches to your height in inches (1 foot = 12 inches).Then convert your height
 *  in inches to your height in meters by multiplying by 0.0254.Then convert your
 *  weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
 *  your BMI by dividing your mass in kilograms by the square of your height in
 *  meters. Use symbolic constants to represent the various conversion factors.
 */
#include <iostream>
using namespace std;
const int FT_TO_INCH = 12;
const double INCH_TO_METER = 0.0254;
const double KG_TO_POUND = 2.2;
int main(void)
{
    double feet, inches, meter;
    double pound, kilogram;
    double bmi;

    cout << "Enter your height in feet and inches: ";
    cin >> feet >> inches;
    meter = (feet * FT_TO_INCH + inches) * INCH_TO_METER;
    cout << "Enter your weight in pounds: ";
    cin >> pound;
    kilogram = pound / KG_TO_POUND;
    bmi = kilogram / (meter * meter);
    cout << "BMI = " << bmi << endl;

    return 0;
}