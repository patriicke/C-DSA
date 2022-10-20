#include<iostream>

using namespace std;

int main(){
    int length, width , area, perimeter;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;
    perimeter = 2 * (length + width);
    area = length * width;
    cout << "The area = " << area << endl;
    cout << "The perimeter = " << perimeter << endl;
    return 0;
}