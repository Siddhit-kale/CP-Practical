#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());

        int maximum = 0;
        for(int i=1; i<n; i++) {
            int currentdiff = 0;
            currentdiff = nums[i] - nums[i - 1];
            maximum = max(maximum, currentdiff);
        }

        return maximum;
    }
};