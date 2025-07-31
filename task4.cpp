#include <iostream>
using namespace std;

bool isAlpha(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

bool isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

bool isUnderscore(char ch) {
    return (ch == '_');
}

bool isValidIdentifier(const char str[]) {
    if (str[0] == '\0')  // Empty string not allowed
        return false;
    
    // Rule a: First character must be alphabet or underscore
    if (!(isAlpha(str[0]) || isUnderscore(str[0])))
        return false;

    // Rule b: Other characters can be alpha, digit, or underscore
    for (int i = 1; str[i] != '\0'; ++i) {
        if (!(isAlpha(str[i]) || isDigit(str[i]) || isUnderscore(str[i])))
            return false;
    }
    return true;
}

int main() {
    char input[100];
    cout << "Enter an identifier: ";
    cin >> input;
    
    if (isValidIdentifier(input)) {
        cout << "Valid Identifier" << endl;
    } else {
        cout << "Invalid Identifier" << endl;
    }
    return 0;
}
