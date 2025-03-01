#include <iostream>
#include <string>
#include <cctype>

using namespace std;

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
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Uppercase: " << toUpper(s) << endl;
    cout << "Lowercase: " << toLower(s) << endl;
    return 0;
}