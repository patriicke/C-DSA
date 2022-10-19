#include<iostream>

using namespace std;

int main (){
    int count, sum = 0, enteredNumber, average, i= 1;
    cout << "How many numbers do you want to enter: ";
    cin >> count;
    if(count <= 0){
        cout << "Thank you for trying to use the program." << endl;
        return 0;
    }
    for (i; i <= count; i++)
    {
        cout << "Enter number " <<  i << " : ";
        cin >> enteredNumber;
        bk:
        if(enteredNumber <= 0){
        cout << "Enter number greater than 0: ";
        cin >> enteredNumber;
        goto bk;
        }else if(enteredNumber == 1) {
            goto terminate;
        }else { 
            sum = sum + enteredNumber;
        }
    }
    terminate:
    average = int(sum/i);
    cout << "The average is " << average << endl;
    return 0;
}