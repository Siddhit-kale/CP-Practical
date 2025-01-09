#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int countRangeSum(vector<int>& nums, int lower, int upper) {
        multiset<long long> sums;
        sums.insert(0);
        long long sum = 0;
        int count = 0;
        for (int num : nums) {
            sum += num;
            count += distance(sums.lower_bound(sum - upper), sums.upper_bound(sum - lower));
            sums.insert(sum);
        }
        return count;
    }
};

int main() {
    Solution solution;
    int n, lower, upper;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << "Enter the lower bound: ";
    cin >> lower;
    cout << "Enter the upper bound: ";
    cin >> upper;
    cout << "Count of range sum: " << solution.countRangeSum(nums, lower, upper) << endl;
    return 0;
}