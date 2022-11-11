#include<iostream>

using namespace std;

int main(){
    int score[15] = {13,17,12};
    // cout << sizeof(score)/sizeof(typeof(score[0])) << endl;
    // for (int i = 0; i < sizeof(score); i++)
    // {
    //     cout << score[i] << endl;
    // }
    for (int i: score)
    {
        cout << i <<endl;
    }
    
    
    return 0;
}