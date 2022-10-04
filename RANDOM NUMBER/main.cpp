#include<iostream>
#include<cstdlib>
using namespace std;

namespace RandomNumbers {
    float randomNumber () {
        return rand();
    }
}

int main(){
    cout << RandomNumbers::randomNumber << endl;
    cout << rand() << endl;
}