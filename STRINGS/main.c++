#include<iostream>

using namespace std;

int main(){
// string fname;
  //  cout << "Enter your name: ";
   // cin >> fname;
     //cout << fname;
      // In case the user wants to put both names;
       string names;
       cout << "Enter your full names: ";
       getline(cin, names);
       cout << names;
       cout << endl;
       cout << "I am comming from biggest city";
    return 1;
}