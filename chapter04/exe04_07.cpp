/*	exe04_07.cpp
 *  2025-02-22
 *  modified by Andy Hsu
 * 
 *  William Wingate runs a pizza-analysis service. For each pizza, he needs to record
 *  the following information:
 *  The name of the pizza company, which can consist of more than one word
 *  The diameter of the pizza
 *  The weight of the pizza
 *  Devise a structure that can hold this information and write a program that uses a
 *  structure variable of that type.The program should ask the user to enter each of the
 *  preceding items of information, and then the program should display that information. Use cin (or its methods) and cout.
 */
#include <iostream>
#include <string>
struct Pizza
{
    std::string company_name;
    double diameter;
    double weight;
};
using namespace std;
int main(void)
{
    Pizza pizzaA;

    cout << "Enter the commpamy name: "; 
    getline(cin, pizzaA.company_name);
    cout << "Enter the diameter of pizza: ";
    cin >> pizzaA.diameter;
    cout << "Enter the weight of pizza: ";
    cin >> pizzaA.weight;
    cout << "Company: " << pizzaA.company_name << endl;
    cout << "Diameter: " << pizzaA.diameter << endl;
    cout << "Weight: " << pizzaA.weight << endl;

    return 0;
}