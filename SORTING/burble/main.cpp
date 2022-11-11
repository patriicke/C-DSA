#include<iostream>

using namespace std;

int main (){
    int i,j,n,temp;
    int numbers[] = {12,55,5,18};
    n = sizeof(numbers)/sizeof(numbers[0]);
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1; j++){
            if (numbers[j] > numbers[j + 1]){
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
            
        }
    }
    cout << "[";
    for (int i = 0; i < n; i++){
        cout << numbers[i] <<  (i+1 != n ? ",": "");
    }
    cout << "]" << endl;
    return 0;
}
