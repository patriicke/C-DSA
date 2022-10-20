#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;
float circumference (float radius){
    return 2 * PI * radius;
}
float area (float radius){
    return PI * pow(radius,2);
}
int main (){
    float radius;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "The area = " << area(radius) << endl;
    cout << "The circumference = " << circumference(radius) << endl;
    return 0;
}