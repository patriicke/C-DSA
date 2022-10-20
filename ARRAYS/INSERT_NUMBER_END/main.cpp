#include<iostream>
#include<array>
using namespace std;

int length(int arr[]){
    return sizeof(arr);
}

int main(){
    int numbers[] = {1,2,3,4,5,6},number, index, arrSize;
    // cout << "Enter number you would like to add: ";
    // cin >> number;
    try{
        cout << length(numbers) << endl;
    }catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    return 0;
}