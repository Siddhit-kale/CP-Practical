#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int arr[], int n)
{
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++) 
    {
        int sum = 0;
        for (int j = i; j < n; j++) 
        {
            sum += arr[j];
            if (sum > max_sum) 
            {
                max_sum = sum;
            }
        }
    }
    return max_sum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = maxSubArraySum(arr, n);
    cout << "Maximum subarray sum is "<<max_sum <<endl;
    return 0;
}
