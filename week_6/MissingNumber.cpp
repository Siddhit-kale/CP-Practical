#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int TotalSum = n * (n + 1) / 2;
        int currentSum = 0;
        
        for (int i : nums) {
            currentSum += i;
        }
        
        return TotalSum - currentSum;
    }
};
