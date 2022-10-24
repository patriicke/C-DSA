#include<iostream>

using namespace std;

int main (){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if(number % 7 == 0 && number % 5 == 0 && number % 3 == 0){
        cout << "PlingPlangPlong";
    }else if( number % 3 == 0 && number % 5 == 0){
        cout << "PlingPlang";
    }else if (number % 7 == 0 && number % 3 == 0){
        cout << "PlingPlong";
    }else if (number % 7 == 0 && number % 5 == 0){
        cout << "PlangPlong";
    }else if (number % 3 == 0){
        cout << "Pling";
    }else if (number % 5 == 0){
        cout << "Plang";
    }else if (number % 7 == 0){
        cout << "Plong";
    }else{
        cout << number;
    }
    cout << endl;
    return 0;
}