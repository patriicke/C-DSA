#include<iostream>

using namespace std; 

int main (){
    string fname, lname;
    cout << "Enter First Name: ";
    getline(cin,fname);
    cout << "Enter Second Name: ";
    getline(cin, lname);
    cout << "Name in reverse: " << lname << " " << fname << endl;
    return 0;
}