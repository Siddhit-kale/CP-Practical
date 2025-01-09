#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    for (char &c : input) {
        if (isalpha(c)) {
            if (islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    cout << input << endl;
    return 0;
}