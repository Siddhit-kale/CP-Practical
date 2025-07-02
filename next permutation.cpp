#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        if(!next_permutation(nums.begin(), nums.end())) {
            sort(nums.begin(), nums.end()); 
        }      

        for(int num : nums) {
            cout << num;
        }
    }
};