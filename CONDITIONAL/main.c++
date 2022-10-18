#include<iostream>

using namespace std;

int main () {
    int count, number;
    int arr[100];

    // cout << "How many number do you want to enter: ";
    // cin >> count;
    // if(count > 0){
    // for (int i = 0; i < count; i++)
    // {
    //     cout << "Enter the number "<< i + 1 << ": ";
    //     cin >> number;
    //     if(number <= 0){
    //         cout << "Please reenter the number: ";
    //         cin >> number;
    //     }else if(number == 1){
    //         cout << "Average of numbers is: " << endl;
    //         break;
    //     }else{
    //         if(i == count) {
    //             cout << "Average of numbers is: " << endl;
    //         }
    //     i++;
    //     }
    // }
    // }else{
    //     cout << "You choose not enter the numbers. Thank you!" << endl;
    // }
    for (int i = 0; i < sizeof arr; i++)
    {
    cout << "number: " <<i << " "<< arr[i]<<endl;
    }
    
    return 0;
}