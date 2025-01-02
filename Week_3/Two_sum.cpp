#include <iostream>
using namespace std;

int main() {

    const int n = 20;
    int target;
    int arr[n];

    for(int i=0; i<n; i++) {

        cin >> arr[i];
        for(int j=0; j<n; j++) {

            cin >> arr[j];
            int sum = arr[i] + arr[j];
            if(sum == target) {
                cout << "[" << arr[i] <<","<<arr[j]<<"]";
            }
        }
    }
  
}