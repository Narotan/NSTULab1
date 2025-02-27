#include <iostream>
#include <string>
#include <cctype>

using namespace std;

pair<string, string> upperLowerCase() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    for (char &c : s) {
        c = toupper(c);
    }
    string upS = s;

    for (char &c : s) {
        c = tolower(c);
    }
    string loS = s;

    return make_pair(upS, loS);
}

int main() {
    pair<string, string> caseVariants = upperLowerCase();
    cout << "Uppercase: " << caseVariants.first << endl;
    cout << "Lowercase: " << caseVariants.second << endl;
    return 0;
}