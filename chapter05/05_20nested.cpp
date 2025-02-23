/*	05_20nested.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  nested loops and 2-D array
 */
#include <iostream>
const int CITIES = 5;
const int YERAS = 4;
using namespace std;
int main(void)
{
    const string cities[CITIES] = {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };
    int maxtemps[YERAS][CITIES] = {
        {96, 100, 87, 101, 105},
        {96, 98, 91, 107, 104},
        {97, 101, 93, 108, 107},
        {98, 103, 95, 109, 108}
    };

    cout << "Maximum temperatures for 2008 - 2011" << endl;
    for(int city = 0; city < CITIES; city++)
    {
        cout << cities[city] << "\t";
        for(int year = 0; year < YERAS; year++)
            cout << maxtemps[year][city] << "\t";
        cout << endl;
    }

    return 0;
}