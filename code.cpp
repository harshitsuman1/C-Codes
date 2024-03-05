#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int minimumStepsToMakePasswordStrong(string password) {
    int steps = 0;
    bool hasLowerCase = false, hasUpperCase = false, hasDigit = false, hasRepeatingChars = false;
    
    // Check if password has at least 6 characters and at most 20 characters
    if (password.length() < 6) {
        steps = 6 - password.length();
    }
    else if (password.length() > 20) {
        steps = password.length() - 20;
    }
    
    // Check if password contains at least one lowercase letter, one uppercase letter, and one digit
    for (char c : password) {
        if (islower(c)) {
            hasLowerCase = true;
        }
        else if (isupper(c)) {
            hasUpperCase = true;
        }
        else if (isdigit(c)) {
            hasDigit = true;
        }
    }
    if (!hasLowerCase) {
        steps++;
    }
    if (!hasUpperCase) {
        steps++;
    }
    if (!hasDigit) {
        steps++;
    }
    
    // Check if password contains three repeating characters in a row
    for (int i = 0; i < password.length(); i++) {
        if (i < password.length() - 2 && password[i] == password[i+1] && password[i] == password[i+2]) {
            hasRepeatingChars = true;
            break;
        }
    }
    if (hasRepeatingChars) {
        steps++;
    }
    
    // Return the minimum number of steps required to make password strong
    return steps;
}

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;
    int steps = minimumStepsToMakePasswordStrong(password);
    cout << "Minimum steps required to make password strong: " << steps << endl;
    return 0;
}
