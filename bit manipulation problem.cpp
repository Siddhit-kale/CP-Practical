#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 0) {
        cout << 0 << endl;
        return 0;
    }

    int num_bits = sizeof(N) * 8;
    int msb_index = num_bits - __builtin_clz(N) - 1;
    int lsb_index = 0;

    N ^= (1 << msb_index);
    N ^= (1 << lsb_index);

    cout << N << endl;
    return 0;
}
