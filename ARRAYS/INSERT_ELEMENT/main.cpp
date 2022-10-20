#include<iostream>

using namespace std;

int main(){
    int numbers[] = {1,2,3,4,5,6,7,8,9}, number , index, i;
    cout << "Enter number you would like to add: ";
    cin >> number;
    cout << "Enter index: ";
    cin >> index;
    i = sizeof(numbers)/4;
    while (index <= i)
    {
        numbers[i] = numbers[i - 1];
        i--;
    }
    numbers[index] = number;
    for (int i = 0; i <  sizeof(numbers)/4 ; i++)
    {
        cout << numbers[i] << endl;
    }
    return 0;
}