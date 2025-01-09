#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    int smallest_infected = n, largest_infected = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if (v[j] - v[i] <= 2){
                int infected = j - i + 1;
                smallest_infected = min(smallest_infected, infected);
                largest_infected = max(largest_infected, infected);
            }
            else
                break;
        }
    }
    cout << "Smallest infected group: " << smallest_infected << endl;
    cout << "Largest infected group: " << largest_infected << endl;
}