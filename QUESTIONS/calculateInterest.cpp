#include<iostream>

using namespace std;

int main (){
    string fullname;
    double initialAmount;
    double interestRatePerAnnum;
    double paymentTimeInYears;

    cout << "Enter your full names: ";
    getline(cin, fullname);
    cout << "Enter initial amount: ";
    cin >> initialAmount;
    cout << "Enter payment in years: ";
    cin >> paymentTimeInYears;
    return 0;
}