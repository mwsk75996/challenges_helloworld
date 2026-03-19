#include <iostream>
using namespace std;

int main() {
    double num1;
    double num2;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    cout << "What type of calculation do you want?" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Division" << endl;
    int choice;
    cin >> choice;
    
    if (choice == 1 or 2 or 3 or 4){
        cout << "Your number is: ";
    }
    if (choice == 1){
        cout << num1 + num2 << endl;
    }
    else if (choice == 2){
        cout << num1 - num2 << endl;
    }
    else if (choice == 3){
        cout << num1 * num2 << endl;
    }
    else if (choice == 4){
        if (num2 == 0){
            cout << "You cannot divide by 0" << endl;
            return 1;
        }
        cout << num1 / num2 << endl;
    }
    else{
        cout << "You can only choose between those 4." << endl;
        return 1;
    }
    return 0;
}