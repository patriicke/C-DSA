#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int product = 1, counter, maxNum;
    cout << "Enter maximum number to find product of prime number below it: ";
    cin >> maxNum;
    for (int i = 1; i < maxNum; i++)
    {
        counter = 0;
        for (int j = 1;j < maxNum; j++)
        {
            if(counter > 1) exit;
            if(j != 1 && i % j == 0) counter++;
        }
        if(counter == 1) product*=i;
    }
    cout << "The product of prime numbers between 1 and maxNum is: " << product << endl;
    return 0;
}
// Prime number is number which can only be divided by one and it's self