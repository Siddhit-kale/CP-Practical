#include<iostream>
using namespace std;

void countMissingNum(int a[], int N)
{
	int count = 0;
	for (int i = 0; i < N - 1; i++) {
		if (a[i+1] != a[i] + 1) {
			count += (a[i+1] - a[i] - 1);
		}
	}
	cout << count << endl;
}

int main()
{
	int N;
    cout<<"Enter the size of array: ";
    cin >> N;
    int arr[N];
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }

	N = sizeof(arr) / sizeof(arr[0]);
	countMissingNum(arr, N);
	return 0;
}

