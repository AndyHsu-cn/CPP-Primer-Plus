/*	04_20ptrstr.cpp
 *  2025-02-22
 *  modified by Andy Hsu
 * 
 *  using pointers to strings
 */
#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    char animal[20] = "bear";
    const char * bird = "wren";
    char * ps;

    cout << animal << " and " << bird << endl;
    cout << "Enter a kind of animal: ";
    cin >> animal;
    // set ps point to animal array's first elements
    ps = animal;
    cout << ps << "!" << endl;
    cout << "Before using strcpy():" << endl;
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    // get dynamic storage
    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "After using strcpy():" << endl;
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *)ps << endl;
    cout << bird << " at " << (int *)bird << endl;

    return 0;
}