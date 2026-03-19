// Fahrenheit til celcius: (x°F − 32) × 5/9 = x°C
// Celcius til fahrenheit: (x°C × 9/5) + 32 = x°F

// Man kan tjekke om en string er en double, ved at bruge "stod(input)"
// betyder basically: "String to double"
// man kan også bruge "stoi(input)" som basically bare er "String to int"

// https://en.cppreference.com/w/cpp/string/basic_string/stol
// https://en.cppreference.com/w/cpp/string/basic_string/stof

#include <iostream>
using namespace std;

int main(){
    string input;
    double temp;
    cout << "What temperature do you wanna convert?" << endl;
    cin >> input;
    try {
        temp = stod(input);
    }
    catch (...) {
        cout << "Not a number." << endl;
        return 1;
    }
    
    int choice;
    cout << "Pick which temperature type you wish to see:" << endl;
    cout << "1. Fahrenheit to Celcius" << endl;
    cout << "2. Celcius to Fahrenheit" << endl;
    cin >> input;
    
    try {
        choice = stoi(input);
    }
    catch (...) {
        cout << "Not a number." << endl;
        return 1;
    }
    if (choice == 1){
        cout << ((temp - 32)* 5/9) << " Celcius" << endl;
    }
    else if (choice == 2){
        cout << ((temp * 9/5) + 32) << " Fahrenheit" << endl;
    }
    else {
        cout << "Wrong number." << endl;
        return 1;
    }
    return 0;
}
