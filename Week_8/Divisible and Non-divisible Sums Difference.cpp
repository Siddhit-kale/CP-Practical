#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int div = 0;
        int sum = 0;

        for(int i=1; i<=n; i++) {
            if((i % m) == 0) {
                div += i;
            }
            else {
                sum += i;
            }
        }

        return sum - div;
    }
};
