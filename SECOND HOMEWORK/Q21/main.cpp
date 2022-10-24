#include<iostream>

using namespace std;

int fromSecondsToYears(int seconds){
    return seconds /( 60 * 60 * 24 * 365); 
} 

int main( ){
    int John_Seconds = 1000000000;
    
    cout << "John is "<< fromSecondsToYears(John_Seconds) << " years old." << endl;
    return 0;
}