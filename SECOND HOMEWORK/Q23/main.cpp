#include<iostream>

using namespace std;

int main(){
    int number, primeNumber, i = 2 , checker = 0, counter;
    cout << "Enter the number: ";
    cin >> number;
    while (true){
        counter = 0;
        for (int j = 2; j <= i; j++){
            if (i % j == 0) counter++;
        }
        if(counter == 1) checker++;
        if(checker == number) break;
        i++;
    }
    cout << i << endl;
    return 0;
}