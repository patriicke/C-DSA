#include<iostream>

using namespace std;
namespace Example
{
    int test = 5;
    int test3 = 9;
}
int n = 5;
int main (){
    int n = 7;
    cout << "local "  << n <<endl;
    cout << "global "  <<::n <<endl;
    return 0;
}