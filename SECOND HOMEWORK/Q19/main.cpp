#include<iostream>

using namespace std;

int main(){
    int arr[3], temp;
    cout << "Enter first number: ";
    cin >> arr[0];
    cout << "Enter second number: ";
    cin >> arr[1];
    cout << "Enter third number: ";
    cin >> arr[2];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            temp = arr[i];
            if(arr[j] > arr[i]){
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}