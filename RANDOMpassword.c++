#include <ctime>
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    
    int letters;
    cout << "Enter the number of letters: "; 
    cin >> letters;
    
    int digits;
    cout << "Enter the number of digits: "; 
    cin >> digits;
    
    int a;
    cout <<"Enter the number of passwords: ";
    cin >> a;

    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string numbers = "0123456789";

    srand(time(0));

    for (int j = 0; j < a; j++) { 
        string password;

        for (int i = 0; i < letters; i++) {
            int randomIndex = rand() % alphabet.length(); 
            password += alphabet[randomIndex]; 
        }

        for (int i = 0; i < digits; i++) {
            int randomIndex = rand() % numbers.length(); 
            password += numbers[randomIndex]; 
        }

        cout << "Your password: " << j+1 << ": " << password << endl;
    }

    return 0;
}
