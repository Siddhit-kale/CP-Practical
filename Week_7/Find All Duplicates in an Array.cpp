#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();
        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        for(auto it : mp) {
            if(it.second > 1) {  
                v.push_back(it.first); 
            }
        }
        return v;
    }
};
