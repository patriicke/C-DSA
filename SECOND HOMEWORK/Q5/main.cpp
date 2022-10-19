#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;

int main(){
    double radius, diameter;
    cout << "Enter the radius of the sphere: ";
    cin >> radius;
    diameter = 4 * PI * pow(radius,3) / 3;
    cout << "The diameter is: " << diameter << endl;
    return 0;
}