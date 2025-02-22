/*	04_04instr2.cpp
 *  2025-02-18
 *  modified by Andy Hsu
 * 
 *  reading more than one word with getline
 */
#include <iostream>
int main(void)
{
    using namespace std;

    const int ARSIZE = 20;
    char name[ARSIZE];
    char dessert[ARSIZE];

    cout << "Enter your name: " << endl;
    cin.getline(name, ARSIZE);
    cout << "Enter your favourite dessert: " << endl;
    cin.getline(dessert, ARSIZE);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << endl;

    return 0;
}