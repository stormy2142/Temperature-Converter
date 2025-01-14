#include <iostream>
#include <cmath>

using namespace std;



int main(){
    char choice;

    do {

    cout << "Please choose: " << endl;
    cout << "1. Fahrenheit to celsius" << endl;
    cout << "2. Celsius to fahrenheit" << endl;
    cout << "Choose what you would like to do: ";
    cin >> choice;

    if (choice == '1') {
        cout << "Temperature in Fahrenheit: ";
        double Fahrenheit;
        cin >> Fahrenheit;
        const double Celsius = (Fahrenheit - 32) / 1.8;
        cout << "Temperature in Celsius: " << Celsius << endl;
        
    }
    else if (choice == '2') {
        cout << "Temperature in Celsius: ";
        double Celsius;
        cin >> Celsius;
        const double Fahrenheit = (Celsius * 9) / 5 + 32;
        cout << "Temperature in Fahrenheit: " << Fahrenheit << endl;
        
    }

    cout << "Do you want to repeat the program? (Y/N): ";
    cin >> choice;
    cin.ignore();

    } while (choice == 'y' || choice == 'Y');
    
    
    cout << "Goodbye" << endl;
    cout << "Press Enter to exit";
    cin.get();


return 0;

 }
