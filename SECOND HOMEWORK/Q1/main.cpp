#include<iostream>

using namespace std;

int main ()
{
    int op, num1, num2;
    string y;
    while (true){
        cout << "MENU: " << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Modulus" << endl;
        cout << "Enter your choice: ";
        cin >> op;
        OP_CHECK:
        if(op <= 5 && op >= 1){
            cout << "Enter your first number: ";
            cin >> num1;
            cout << "Enter your second number: ";
            cin >> num2;
            switch (op)
            {
            case 1:
                cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
            case 2:
                cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
            case 3:
                cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
            case 4:
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
            case 5:
                cout << num1 << " % " << num2 << " = " << num1 % num2;
            break;
            default:
                break;
            }
            cout << endl;
            cout << "Enter y to continue: ";
            cin >> y;
            if(y == "y"){
                continue;
            }else{
                goto terminate;
            }

        }else{
            cout << "Enter correct operator: ";
            cin >> op;
            goto OP_CHECK;
        }
    }
    terminate:
    cout << "Thank you for using the program." << endl;

    return 0;
}