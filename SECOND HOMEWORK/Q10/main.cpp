#include<iostream>
#include<math.h>

using namespace std;

int main(){
    double a, b, c, x1, x2 , delta;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    delta = sqrt(pow(b,2)-(4*a*c));
    x1 = (-b + delta)/(2*a);
    x2 = (-b - delta)/(2*a);
    cout << "x1 = " << x1 << " or x2 = " << x2 << endl;
    return 0;
}

// Given a, b,c indices of a quadratic function , find the roots x1, x2 of the equation 