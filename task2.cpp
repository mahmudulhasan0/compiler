#include <iostream>
using namespace std;

int main() {
    char input[100];
    cout << "Enter expression: ";
    cin >> input;

    int operatorCount = 0;

    int i = 0;
    while (input[i] != '\0') {

        if (input[i] == '+' || input[i] == '-' || input[i] == '*' ||
            input[i] == '/' || input[i] == '%' || input[i] == '=') {
            operatorCount++;
            cout << "operator" << operatorCount << ": " << input[i] << endl;
        }
        i++;
    }

    if (operatorCount == 0) {
        cout << "No operators found" << endl;
    }

    return 0;
}

