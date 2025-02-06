#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> findSubarrayWithTargetSum(vector<int>& nums, int target) {
    unordered_map<int, int> prefixSumMap;
    int prefixSum = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        prefixSum += nums[i];
        
        if (prefixSum == target) {
            return vector<int>(nums.begin(), nums.begin() + i + 1);
        }
        
        if (prefixSumMap.find(prefixSum - target) != prefixSumMap.end()) {
            int start = prefixSumMap[prefixSum - target] + 1;
            return vector<int>(nums.begin() + start, nums.begin() + i + 1);
        }
        
        prefixSumMap[prefixSum] = i;
    }
    
    return {}; // Return empty vector if no subarray found
}

int main() {
    vector<int> nums;
    int n, target;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    cout << "Enter the target sum: ";
    cin >> target;
    
    vector<int> result = findSubarrayWithTargetSum(nums, target);
    
    if (!result.empty()) {
        cout << "Subarray with the target sum: ";
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No subarray found with the target sum." << endl;
    }
    
    return 0;
}
