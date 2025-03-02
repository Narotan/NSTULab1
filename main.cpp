#include <iostream>
#include <string>
#include <cctype>

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


string toUpper(const string &s) {
    string result = s;
    for (char &c : result) {
        c = toupper(c);
    }
    return result;
}

string toLower(const string &s) {
    string result = s;
    for (char &c : result) {
        c = tolower(c);
    }
    return result;
}

int main() {

    while (true) {
        cout << "\nВыберите номер фрагмента:\n"
             << "1. Приведение текста к верхнему и нижнему регистрам (только английские) \n"
             << "2. Палиндром или нет?\n"
             << "Номер? (0 для выхода): ";
        int choice;
        cin >> choice;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
            case 1: {
                string s;
                cout << "Enter a string: ";
                getline(cin, s);
                cout << "Uppercase: " << toUpper(s) << endl;
                cout << "Lowercase: " << toLower(s) << endl;
                break;
            }

            case 2: {
                cout << "введите строку: ";
                string inString;
                getline(cin, inString);
                if (checkIfPalindrome(inString)) {
                    cout << "вы ввели палиндром." << endl;
                }
                else {
                    cout << "вы ввели не палиндром" << endl;
                }
                break;
            }
            case 0: {
                cout << "Выход из программы." << endl;
                return 0;
            }

            default: {
                cout << "Неверный выбор. Попробуйте снова." << endl;
                break;
            }
        }
    }
    return 0;
}