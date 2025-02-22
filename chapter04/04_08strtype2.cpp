/*	04_08strtype2.cpp
 *  2025-02-19
 *  modified by Andy Hsu
 * 
 *  assigning, adding, and appending
 */
#include <iostream>
using namespace std;
int main(void)
{
    string s1 = "penguin";
    string s2, s3;

    cout << "You can assign one string object to another: s2 = s1" << endl;
    s2 = s1;
    cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
    cout << "You can assin a C-style string to a string object." << endl;
    cout << "s2 = \"buzzard\"" << endl;
    s2 = "buzzard";
    cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
    cout << "You can concatenate strings: s3 = s1 + s2" << endl;
    s3 = s1 + s2;
    cout << "s3 = " << s3 << endl;
    cout << "You can append strings." << endl;
    s1 += s2;
    cout << "s1 += s2 yields s1 = " << s1 << endl;
    s2 += " for a day";
    cout << "s2 += \"for a day\" yields s2 = " << s2 << endl;

    return 0;
}