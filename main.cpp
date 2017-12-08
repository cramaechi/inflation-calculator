#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

double computeInflationRate(double pastPrice, double currentPrice);
//Precondition: pastPrice and currentPrice are non-zero, non-negative integers.
//Returns the rate of inflation, given the items past price and current price.

void clearScreen();
//Clears the console Screen.


int main(int argc, char* argv[])
{
    char ans;
    do
    {
        double pPrice, cPrice;

        cout<<"Enter the price of a random item from one year ago and today: ";
        cin>>pPrice;
        cin>>cPrice;
        cout<<endl;
        cout<<"The inflation rate for the past year is ";
        cout.setf(ios::showpoint);
        cout.setf(ios::fixed);
        cout.precision(1);
        cout<<computeInflationRate(pPrice, cPrice)<<"%\n\n";
        cout<<"Start over? (y/n): ";
        cin>>ans;

        if(ans == 'Y' || ans == 'y')
            clearScreen();
    }while(ans == 'Y' || ans == 'y');

    return 0;
}

double computeInflationRate(double pPrice, double cPrice)
{
    double iR = ((cPrice - pPrice)/pPrice);

    return iR;
}

void clearScreen()
{
    cout<<"\n\n";
}
