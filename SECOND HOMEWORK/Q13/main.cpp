#include<iostream>

using namespace std;

void quotiendAndRemainder (int num1, int num2){
    int quotient = num1 / num2 , remainder = num1 % num2;
    cout << "Quotient = " << quotient << " and remainder = " << remainder << endl;
}

int main(){
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    quotiendAndRemainder(num1, num2);
    return 0;
}