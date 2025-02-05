#include <iostream>
#include <vector>

using namespace std;

void findOddOccurrences(vector<int>& arr) {
    int xor_all = 0;
    for (int num : arr) {
        xor_all ^= num;
    }

    int rightmost_set_bit = xor_all & ~(xor_all - 1);

    int x = 0, y = 0;
    for (int num : arr) {
        if (num & rightmost_set_bit) {
            x ^= num;
        } else {
            y ^= num;
        }
    }

    cout << x << " and " << y << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    findOddOccurrences(arr);

    return 0;
}
