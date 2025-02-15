/*	02_05ourfunc.cpp
 *  2025-02-15
 *  modified by Andy Hsu
 * 
 *  defining your own function
 */
#include <iostream>
void simmon(int n);
int main(void)
{
    using namespace std;

    simmon(3);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simmon(count);
    cout << "Done!" << endl;

    return 0;
}

void simmon(int n)
{
    using namespace std;

    cout << "Simmon says touch your toes " << n << " times." << endl;
}