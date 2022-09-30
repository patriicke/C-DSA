#include<iostream>
#include<iomanip>
#define PI 3.1415

using namespace std;

int main(){
    float radius;
    float area;
    float circumference;
    cout << "Enter the radius: ";
    cin >> radius;
    area = PI * radius * radius;
    circumference = 2 * radius * PI;
    cout << "The area is: " << area << endl;
    cout << "The circumference is: " << area << endl;
    cout << "RCA" << endl;
    cout << setw(4) << "RCA" << endl;
    cout << hex << 20 << endl;
    cout << oct << 20 << endl;
    return 0;
}