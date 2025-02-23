/*	05_14waiting.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  using c clock() in a time-delay loop
 */
#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>
using namespace std;
int main(void)
{
    float secs;

    #if 0
    cout << "Enter the delay time, in seconds: ";
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    clock_t start = clock();
    cout << "starting\a" << endl;
    while(clock() - start < delay)
        ;
    cout << "done\a" << endl;
    #endif

    #if 1
    std::this_thread::sleep_for(std::chrono::seconds(2));
    #endif 

    return 0;
}