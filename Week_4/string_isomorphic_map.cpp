#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

bool isomorphic(string s1, string s2)
{
    if(s1.length() == s2.length())
        return false;

    unordered_map<char, int> m1, m2;

    for (int i = 0; i < s1.length(); ++i) {
      
        if (m1.find(s1[i]) == m1.end()) {
            m1[s1[i]] = i;
        }
        if (m2.find(s2[i]) == m2.end()) {
            m2[s2[i]] = i;
        }

        if (m1[s1[i]] != m2[s2[i]]) {
            return false;
        }
    }
    return true;
}

int main() {

    string str1, str2;
    cin >> str1;
    cin >> str2;
    cout << (isomorphic(str1, str2) ? "True" : "False");
    return 0;
}