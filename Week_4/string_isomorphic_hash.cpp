#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
using namespace std;

bool isIsomorphic(const string &s1, const string &s2) {
    if (s1.length() != s2.length()) return false;

    unordered_map<char, char> m1; 
    unordered_set<char> set2; 

    for (int i = 0; i < s1.length(); ++i) {
        char c1 = s1[i], c2 = s2[i];
        if (m1.find(c1) != m1.end()) 
        {
            if (m1[c1] != c2) return false;
        } 
        else 
        {    
            if (set2.find(c2) != set2.end()) return false;
            m1[c1] = c2;
            set2.insert(c2);
        }
    }
    return true;
}

int main() {
    string str1, str2;
    cin >> str1;
    cin >> str2;
    cout << (isIsomorphic(str1, str2) ? "True" : "False") << endl;
    return 0;
}