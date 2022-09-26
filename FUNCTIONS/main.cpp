#include<iostream>
using namespace std;
//This is the function prototype
void sayHi(string fullname);
int main(){
    string fullname;
    cout << "Enter your fullnames: ";
    getline(cin,fullname);
    sayHi(fullname);
    return 0;
}
//This is the complete function with the body;
void sayHi (string fullname){
    cout << "Hi! " << fullname << "\n";
}