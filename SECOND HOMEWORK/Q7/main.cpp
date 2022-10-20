#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int product = 1;
    for (int i = 1; i < 20; i++)
    {
        if(i % 2 != 0) product*= i;
        i++;
    }
    cout << "The product of odd numbers less between 1 and 20: " << product << endl;
    
    return 0;
}