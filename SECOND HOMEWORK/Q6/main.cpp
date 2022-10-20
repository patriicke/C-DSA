#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int sum = 0;
    for (int i = 0; i < 100; i++)
    {
        if(i % 2 == 0) sum+= i;
        i++;
    }
    cout << "The sum of even numbers less than 100 is: " << sum << endl;
    
    return 0;
}