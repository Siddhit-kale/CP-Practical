#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    string str = to_string(num);
    int left = 0, right = str.size() - 1;
    while (left < right) {
        if (str[left] != str[right]) return false;
        left++;
        right--;
    }
    return true;
}

// Function to precompute all palindromic numbers up to (1 << 15)
vector<int> precomputePalindromes() {
    vector<int> palindromes;
    for (int i = 0; i < (1 << 15); i++) {
        if (isPalindrome(i)) {
            palindromes.push_back(i);
        }
    }
    return palindromes;
}

int main() {
    int T;
    cin >> T;

    // Precompute all palindromic numbers
    vector<int> palindromes = precomputePalindromes();

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        unordered_map<int, int> freq;

        // Read the array and store frequencies
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            freq[A[i]]++;
        }

        long long count = 0;

        // Count pairs
        for (int i = 0; i < N; i++) {
            // Exclude the current element for counting pairs
            freq[A[i]]--;
            for (int p : palindromes) {
                int xor_val = A[i] ^ p;
                if (freq.find(xor_val) != freq.end()) {
                    count += freq[xor_val];
                }
            }
            // Include the current element back
            freq[A[i]]++;
        }

        cout << count << endl;
    }

    return 0;
}
