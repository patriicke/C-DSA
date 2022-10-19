#include<iostream>

using namespace std;

double maximum(double x, double y, double z){
    double maxValue = x;
    if(y > maxValue)
      maxValue = y;
    if(z > maxValue)
        maxValue = z;
    return maxValue;
}

int main () {
    cout << maximum(1,2,3) << endl;
    return 0;
}