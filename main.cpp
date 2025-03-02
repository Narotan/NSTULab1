#include <iostream>

using namespace std;

bool checkIfPalindrome(string& inString) {
    int leftPointer = 0;
    int rightPointer = inString.length() - 1;
    while (leftPointer < rightPointer) {
        if (inString[leftPointer] != inString[rightPointer]) {
            return false;
        }
        else {
            leftPointer++;
            rightPointer--;
        }
    }
    return true;
}

int main() {
    cout << "введите строку: ";
    string inString;
    getline(cin, inString);
    if (checkIfPalindrome(inString)) {
        cout << "вы ввели палиндром." << endl;
    }
    else {
        cout << "вы ввели не палиндром" << endl;
    }
    return 0;
}