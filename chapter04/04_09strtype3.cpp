/*	04_09strtype3.cpp
 *  2025-02-19
 *  modified by Andy Hsu
 * 
 *  more string class features
 */
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(void)
{   
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    int len1, len2;

    // assignment for string objects and character arrays
    str1 = str2;
    strcpy(charr1, charr2);

    // appending for string objects and character arrays
    str1 += " paste";
    strcat(charr1, " juice");

    // finding the length of a string objects and character arrays
    len1 = str1.size();
    len2 = strlen(charr2);
    
    cout << "The string " << str1 << " contains " << len1
         << " characters." << endl;
    cout << "The character arrays " << charr1 << " contains " << len2
         << " characters." << endl;

    return 0;
}