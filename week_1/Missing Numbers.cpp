#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    map<int, int> freqArr, freqBrr;
    vector<int> missing;

    for (int num : brr) {
        freqBrr[num]++;
    }
    for (int num : arr) {
        freqArr[num]++;
    }

    for (const auto& pair : freqBrr) {
        int num = pair.first;
        int count = pair.second;
        if (freqArr[num] < count) {
            missing.push_back(num);
        }
    }

    sort(missing.begin(), missing.end());
    return missing;
}

int main() {
    int n, m;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> m;
    vector<int> brr(m);
    for (int i = 0; i < m; ++i) {
        cin >> brr[i];
    }

    vector<int> result = missingNumbers(arr, brr);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
