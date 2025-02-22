/*	exe04_09.cpp
 *  2025-02-22
 *  modified by Andy Hsu
 * 
 *  Do Programming exe04_06.cpp, but instead of declaring an array of three CandyBar
 *  structures, use new to allocate the array dynamically.
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
    CandyBar * pcb = new CandyBar[3];

    for (int i = 0; i < 3; i++)
    {
        (pcb + i) -> brand = "Mocha Munch";
        (pcb + i) -> weight = 2.3;
        (pcb + i) -> calories = 350;
    }
    
    for(int i = 0; i < 3; i++)
    {
        cout << "Snacks[" << i + 1 << "] "<< endl;
        cout << "Brand: " << (pcb + i) -> brand << endl;
        cout << "Weight: " << (pcb + i) -> weight << endl;
        cout << "Calories: " << (pcb + i) -> calories << endl << endl;
    }

    return 0;
}