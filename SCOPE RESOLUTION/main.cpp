#include<iostream>

using namespace std;

int a = 10;
int main(){
    int a = 15;
    cout << "Local a=" << a <<"\n";
    
    cout << "Global a="<< ::a << "\n";
    return 0;
}