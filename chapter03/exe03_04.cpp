/*	exe03_04.cpp
 *  2025-02-17
 *  modified by Andy Hsu
 * 
 *  Write a program that asks the user to enter the number of seconds as an integer
 *  value (use type long, or, if available, long long) and that then displays the equivalent time in days, hours, minutes, and seconds. Use symbolic constants to represent
 *  the number of hours in the day, the number of minutes in an hour, and the number
 *  of seconds in a minute.The output should look like this:

    Enter the number of seconds: 31600000
    31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds  
 
 */
#include <iostream>
#define SEC_IN_MIN          60
#define SEC_IN_HOUR         (60 * SEC_IN_MIN)
#define SEC_IN_DAY          (24 * SEC_IN_HOUR)
using namespace std;
int main(void)
{
    long sec_tot;
    int day, hour, min, sec;

    cout << "Enter the number of seconds: ";
    cin >> sec_tot;
    day = sec_tot / SEC_IN_DAY;
    hour = (sec_tot % SEC_IN_DAY) / SEC_IN_HOUR;
    min = ((sec_tot % SEC_IN_DAY) % SEC_IN_HOUR) / SEC_IN_MIN;
    sec = ((sec_tot % SEC_IN_DAY) % SEC_IN_HOUR) % SEC_IN_MIN;

    cout << sec_tot << " seconds = " << day << " days, " << hour << " hours, "
         << min << " minutes, " << sec << " seconds" << endl;

    return 0;
}