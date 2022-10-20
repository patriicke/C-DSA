#include<iostream>
#include<math.h>

using namespace std;

bool isNumberInteger(double N);

int main(){
    int i = 1, j = 1;
    for ( i ; i < 100; i++){
        for ( j = i + 1; j < 100; j++){
            if(isNumberInteger(sqrt(pow(i,2)+pow(j,2)))){
            cout << "( " << i << "," << j << " )" << endl;
            }
        }
    }
    return 0;
}

bool isNumberInteger(double DOUBLE_NUM){
    int INT_NUM = DOUBLE_NUM;
    double CHECKER = DOUBLE_NUM - INT_NUM;
    if(CHECKER > 0){
      return false;
    }else{
      return true;
    }
}

// Print all integer pairs(a,b) greater than 1 and  less than 100 that can satisfy hypotenuse rule. Hypotenuse should be also integer. Display the number of pairs found. Treat (3,4) and (4,3) as one pair.