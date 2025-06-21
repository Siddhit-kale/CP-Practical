#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long calculateCoprimeTriples(int n, vector<int>& A) {
    int ans=0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            for(int k=j+1;k<n;k++)
                if(__gcd(A[i],__gcd(A[j],A[k]))==1)
                    ++ans;
    return ans;
}

//Do not edit this part of code 
 int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    long long result = calculateCoprimeTriples(n, A);
    cout << result << endl;
    return 0;
}