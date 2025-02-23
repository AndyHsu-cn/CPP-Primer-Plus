/*	exe05_04.cpp
 *  2025-02-23
 *  modified by Andy Hsu
 * 
 *  Daphne invests $100 at 10% simple interest.That is, every year, the investment earns
 *  10% of the original investment, or $10 each and every year:
 *  interest = 0.10 × original balance
 *  At the same time, Cleo invests $100 at 5% compound interest.That is, interest is 5%
 *  of the current balance, including previous additions of interest:
 *  interest = 0.05 × current balance
 *  Cleo earns 5% of $100 the first year, giving her $105.The next year she earns 5% of
 *  $105, or $5.25, and so on.Write a program that finds how many years it takes for
 *  the value of Cleo’s investment to exceed the value of Daphne’s investment and then
 *  displays the value of both investments at that time.
 */
#include <iostream>
const double BALANCE = 100.0;
const double INTEREST_DAPHNE = 0.1;
const double INTERSET_CLEO = 0.05;
using namespace std;
int main(void)
{
    double balance_daphne = BALANCE;
    double balance_cleo = BALANCE;
    int years = 0;

    while(balance_cleo <= balance_daphne)
    {
        balance_cleo *= (1 + INTERSET_CLEO);
        balance_daphne += BALANCE * INTEREST_DAPHNE;
        years++;
    }
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << years << " years it takes for the value of Cleo’s investment to exceed the value of Daphne’s investment." << endl;
    cout << "The value of Cleo: " << balance_cleo << "; the value of Daphne: " << balance_daphne << endl;

    return 0;
}