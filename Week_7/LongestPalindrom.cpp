#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char> charset;
        int count = 0;

        for (char c : s) {
            if (charset.find(c) != charset.end()) {
                charset.erase(c);
                count += 2;
            } else {
                charset.insert(c);
            }
        }

        if (!charset.empty()) {
            count += 1;
        }

        return count;
    }
};
