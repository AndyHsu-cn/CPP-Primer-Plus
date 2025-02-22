/*	exe04_08.cpp
 *  2025-02-22
 *  modified by Andy Hsu
 * 
 *  Do Programming exe04_07.cpp but use new to allocate a structure instead of declaring
 *  a structure variable.Also have the program request the pizza diameter before it
 *  requests the pizza company name.
 */
#include <iostream>
struct Pizza
{
    double diameter;
    std::string company_name;
    double weight;
};
using namespace std;
int main(void)
{
    Pizza * pp = new Pizza;

    cout << "Enter the diameter of pizza: ";
    cin >> pp->diameter;
    cin.get();
    cout << "Enter the commpamy name: "; 
    getline(cin, pp->company_name);
    cout << "Enter the weight of pizza: ";
    cin >> pp->weight;
    cout << "Company: " << pp->company_name << endl;
    cout << "Diameter: " << pp->diameter << endl;
    cout << "Weight: " << pp->weight << endl;

    return 0;
}