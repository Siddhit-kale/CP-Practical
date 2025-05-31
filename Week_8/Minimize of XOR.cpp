#include<bits/stdc++.h>

class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int b = __builtin_popcount(num2);
        int res = 0;

        for (int i = 31; i >= 0 && b > 0; --i) {
            if ((num1 >> i) & 1) {
                res |= (1 << i);
                --b;
            }
        }

        for (int i = 0; i < 32 && b > 0; ++i) {
            if (!((res >> i) & 1)) {
                res |= (1 << i);
                --b;
            }
        }

        return res;
    }
};