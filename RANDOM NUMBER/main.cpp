#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int randomNumber (int min, int max);

int main(){
  cout << randomNumber(5, 9) << endl;
}

int randomNumber(int min, int max){
    srand(time(0));
    return rand() % (max - min + 1) + min;
}