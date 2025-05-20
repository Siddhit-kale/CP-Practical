#include<bits/stdc++.h>
using namespace std;

#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int countPaliSubseq = 0;

        for (char c = 'a'; c <= 'z'; ++c) {
            int firstIndex = s.find_first_of(c);
            int lastIndex = s.find_last_of(c);

            unordered_set<char> uniqueChars;

            for (int i = firstIndex + 1; i < lastIndex; ++i) {
                uniqueChars.insert(s[i]);
            }

            countPaliSubseq += uniqueChars.size();
        }
        return countPaliSubseq;
    }
};