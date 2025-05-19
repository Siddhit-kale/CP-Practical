#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int currentsum = 0;

        for(int i=0; i<nums.size(); i++) {
            
            if( currentsum < 0) {
                currentsum = 0;
            }

            currentsum = currentsum + nums[i];
            maxsum = max(maxsum, currentsum);
        }

        return maxsum;
        
    }
};