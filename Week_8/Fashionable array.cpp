#include <bits/stdc++.h>
using namespace std;

int fashionablearray(int arr[], int n) {
    int odd = 0, even = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }

    return min(odd, even);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[55]; 
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int result = fashionablearray(arr, n);
        cout << result << '\n'; 
    }
    return 0;
}
