#include<iostream>

using namespace std;

int main (){
    int i,j,n,temp;
    int numbers[] = {66,78,21,10,2,44};
    n = sizeof(numbers)/sizeof(numbers[0]);
    for (int i = 1; i < n ; i++){
        cout << (i) << " iteration: "<< endl;
        for (int j = 0; j < n - 1; j++){
            if (numbers[j] > numbers[j + 1]){
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
            cout << endl;
            cout << "j="<< j<< endl;
            for (int p = 0; p < n; p++)
            {
                cout << numbers[p] << "\t";
            }
            cout << endl;
        }
    }
    cout << "[";
    for (int i = 0; i < n; i++){
        cout << numbers[i] <<  (i+1 != n ? ",": "");
    }
    cout << "]" << endl;
    return 0;
}
