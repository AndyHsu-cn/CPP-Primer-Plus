/*	04_05instr3.cpp
 *  2025-02-18
 *  modified by Andy Hsu
 * 
 *  reading more than one word with get() & get()
 */
#include <iostream>
int main(void)
{
    using namespace std;

    const int ARSIZE = 20;
    char name[ARSIZE];
    char dessert[ARSIZE];

    cout << "Enter your name: " << endl;
    cin.get(name, ARSIZE).get();
    cout << "Enter your favourite dessert: " << endl;
    cin.get(dessert, ARSIZE).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << endl;

    return 0;
}