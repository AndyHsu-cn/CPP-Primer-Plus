/*	05_10equal.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  equality vs assignment
 */
#include <iostream>
using namespace std;
int main(void)
{
    int quizscores[10] = {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};
    int i;

    cout << "Doing it right:" << endl;
    for(i = 0; quizscores[i] == 20; i++)
        cout << "quiz " << i << " is a 20" << endl;
    cout << endl;
    cout << "Doing it dangerously wrong:" << endl;
    for(i = 0; quizscores[i] = 20; i++)
        cout << "quiz " << i << " is a 20" << endl;

    return 0;
}