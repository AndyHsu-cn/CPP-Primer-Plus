/*	exe04_03.cpp
 *  2025-02-22
 *  modified by Andy Hsu
 * 
 *  Write a program that asks the user to enter his or her first name and then last
 *  name, and that then constructs, stores, and displays a third string, consisting of the
 *  user’s last name followed by a comma, a space, and first name. Use char arrays and
 *  functions from the cstring header file.A sample run could look like this:

    Enter your first name: Flip
    Enter your last name: Fleming
    Here’s the information in a single string: Fleming, Flip
 
 */
#include <iostream>
#include <cstring>
using namespace std;
const int ARSIZE = 20;
int main(void)
{
    char first_name[ARSIZE];
    char last_name[ARSIZE];
    char full_name[2 * ARSIZE];

    cout << "Enter your first name: ";
    cin.getline(first_name, ARSIZE);
    cout << "Enter your last name: ";
    cin.getline(last_name, ARSIZE);
    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);
    cout << "Here’s the information in a single string: " << full_name << endl;

    return 0;
}