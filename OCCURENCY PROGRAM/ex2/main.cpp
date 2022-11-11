#include<iostream>
#include<string>
using namespace std;

int appearance(int number){
    string num = to_string(number);
    int maxcount, counter;
    string currNum;
    int arrlen = num.length();
     for ( int i = 0; i < arrlen; i++){
        counter = 0;
        for (int j = 0; j < arrlen; j++){
            if(num[i] == num[j]){
                counter++;
            } 
        }
        if(counter > maxcount ){
            currNum = num[i];
            maxcount = counter;
        }
    }
    cout << "number is: " <<  currNum << " it is occurring " << maxcount  << endl;
    return maxcount;
}

int main(){
    int number = 2345333;
    appearance(number);
    return 0;
}