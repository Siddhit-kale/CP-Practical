#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minlen = numeric_limits<int>::max();
        int left = 0;
        int cursum = 0;

        for(int right = 0; right < nums.size(); right++) {
            cursum += nums[right];

            while(cursum >= target) {
                if(right - left + 1 < minlen) {
                    minlen = right -left + 1;
                } 
                cursum -= nums[left];
                left++;
            }
        }
        return minlen != numeric_limits<int>::max() ? minlen : 0;

    }
};