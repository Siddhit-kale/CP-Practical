#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for(int i=0; i < n; i++) {
            for(int j=i + 1; j < n; j++) {
                
                int goal = nums[i] + nums[j];

                if(goal == target) {
                    return {i, j}; 
                }
            }
        }
        return {};
    }
};