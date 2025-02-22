/*	exe04_06.cpp
 *  2025-02-22
 *  modified by Andy Hsu
 * 
 *  The CandyBar structure contains three members, as described in Programming
 *  exe04_06.cpp. Write a program that creates an array of three CandyBar structures,
 *  initializes them to values of your choice, and then displays the contents of 
 *  each structure.
 */
#include <iostream>
#include <string>
struct CandyBar
{
    std::string brand;
    double weight;
    int calories;
};
using namespace std;
int main(void)
{
    CandyBar snacks[3] = {
        {"Mocha Munch1", 2.3, 350},
        {"Mocha Munch2", 2.5, 360},
        {"Mocha Munch3", 2.7, 370}
    };

    for(int i = 0; i < 3; i++)
    {
        cout << "Snacks[" << i + 1 << "] "<< endl;
        cout << "Brand: " << snacks[i].brand << endl;
        cout << "Weight: " << snacks[i].weight << endl;
        cout << "Calories: " << snacks[i].calories << endl << endl;
    }

    return 0;
}