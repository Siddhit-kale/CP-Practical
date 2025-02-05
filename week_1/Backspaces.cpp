#include <iostream>
#include <string>
using namespace std;

string processString(const string& str) {
    string result;
    for (char c : str) {
        if (c == '#') {
            if (!result.empty()) {
                result.pop_back();
            }
        } else {
            result.push_back(c);
        }
    }
    return result;
}

int main() {
    string s, t;
    cin >> s >> t;
    
    if (processString(s) == processString(t)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}
