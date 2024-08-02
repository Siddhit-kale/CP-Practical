#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int arr[], int n) {
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++) 
    {
        for (int j = i; j < n; j++) 
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            if (sum > max_sum) 
            {
                max_sum = sum;
            }
        }
    }
    return max_sum;
}

int main() {
    int arr[] = {-2, 1, 1, 2, 3, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = maxSubArraySum(arr, n);
    cout << "Maximum subarray sum is " << max_sum <<endl;
    return 0;
}
