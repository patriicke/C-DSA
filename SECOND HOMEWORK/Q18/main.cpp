#include<iostream>
#include<math.h>
using namespace std;
int volume(int side){
    return pow(side, 3);
}
int main (){
    int side;
    cout << "Enter the lenght one side of a cube: ";
    cin >> side;
    cout << "The volume of a cube is " << volume(side) << endl;
    return 0;
}