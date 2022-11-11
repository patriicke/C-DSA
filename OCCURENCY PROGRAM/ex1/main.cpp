#include<iostream>

using namespace std;

int main(){
    int numbers[] = {2,3,4,5,6,2,3,4,3,4,4,5,3,3}, maxcount = 0, counter = 0 , number;
    int arrlen = sizeof(numbers)/sizeof(typeof(numbers[0]));
    for ( int i = 0; i < arrlen; i++){
        counter = 0;
        for (int j = 0; j < arrlen; j++){
            if(numbers[i] == numbers[j]){
                counter++;
            } 
        }
        if(counter > maxcount ){
            number = numbers[i];
            maxcount = counter;
        }
    }
    cout << "number is: " <<  number << " it is occurring " << maxcount  << endl;
    return 0;
}