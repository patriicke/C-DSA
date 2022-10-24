#include<iostream>

using namespace std;

bool palindromeChecker (string str1){
    int strlen = str1.length();
    bool checker = true;
    for (size_t i = 0; i < strlen; i++){
        if (str1[i] != str1[strlen - (i + 1) ]){
            checker = false;
        }
    }
    return checker;
}
    
int main (){
    string text;
    cout << "Palindrome checker. Enter a string: ";
    cin >> text;
    if(palindromeChecker)cout << text << " is a palindrome";
    else cout << text << " is not a palindrome";
    cout << endl;
    return 0;
}