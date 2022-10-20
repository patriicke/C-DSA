#include<iostream>

using namespace std;
string checkNumber (int number){
    if(number == 0){
        return "The number is ZERO";
    }else if(number > 0) {
        return "The number is POSITVE";
    }else{
        return "The number is NEGATIVE";
    }
}
int main(){
    int number;
    cout << "Enter number: ";
    cin >> number;
    cout << checkNumber(number) << endl;
    return 0;
}