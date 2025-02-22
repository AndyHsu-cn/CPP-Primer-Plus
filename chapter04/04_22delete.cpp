/*	04_22delete.cpp
 *  2025-02-22
 *  modified by Andy Hsu
 * 
 *  using the delete operator
 */
#include <iostream>
#include <cstring>
char * get_name();
using namespace std;
int main(void)
{
    char * name;

    name = get_name();
    cout << name << " at " << (int *)name << endl;
    delete [] name;

    name = get_name();
    cout << name << " at " << (int *)name << endl;
    delete [] name;

    return 0;
}

char * get_name()
{
    char temp[80];

    cout << "Enter last name: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);

    return pn;
}