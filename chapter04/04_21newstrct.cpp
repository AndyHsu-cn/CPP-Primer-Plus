/*	04_21newstrct.cpp
 *  2025-02-22
 *  modified by Andy Hsu
 * 
 *  using new with a structure
 */
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
using namespace std;
int main(void)
{
    inflatable * ps = new inflatable;

    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);
    cout << "Enter volume of cubic feet: ";
    cin >> (*ps).volume;
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << endl;
    cout << "Price: " << ps->price << endl;
    delete ps;

    return 0;
}
