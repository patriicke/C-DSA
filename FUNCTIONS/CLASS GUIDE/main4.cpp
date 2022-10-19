#include<iostream>

using namespace std;

void change(int& a, int&b, int&c) {
    a = a*2;
    b = b*2;
    c = c*2;
}

int main () {
    int x = 5, y=6, z=7;
    //ref is a reference to x
    change(x, y, z);
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    return 0;
}