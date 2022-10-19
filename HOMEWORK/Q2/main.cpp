#include<iostream>

using namespace std;

int main (){
    string text= "";
    while (text != "q")
    {
        cout << "Enter the text: ";
        getline(cin, text);
    }
    cout << "Thank you for using the program." << endl;    
    return 0;
}