#include<iostream>

using namespace std;

int main(){
    double celcius, fahrenheit;
    cout << "Enter the temperature in celcius: ";
    cin >> celcius;
    fahrenheit = (celcius * 9/5) + 32;
    cout << "The temperature in fahrenheit is " << fahrenheit << " fahrenheits." << endl; 
    
    
    return 0;
}