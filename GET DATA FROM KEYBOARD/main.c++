#include<iostream>

using namespace std;

int main(){
    string firstname;
    string lastname;
    int age;
    
    cout << "Please enter a firstname: ";
    getline(cin, firstname);
    cout << "Please enter a lastname: ";
    getline(cin, lastname);
    cout << "Please enter age: ";
    cin >> age;
    cout << "First name: " << firstname << " Last name: "<<lastname << " Age: "<< age;
    return 1;
}