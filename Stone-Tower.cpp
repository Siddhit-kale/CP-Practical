#include <iostream>
#include <queue>
using namespace std;

void lastStoneAndWinner(int n, vector<int>& stones) {
    queue<int> q;
    for (int stone : stones) q.push(stone);
    
    int player = 0;  
    while (q.size() > 1) {
        if (player == 0) {
            q.push(q.front()); q.pop(); 
            q.pop();                     
        }
       
        else {
            q.push(q.front()); q.pop();
            q.push(q.front()); q.pop(); 
            q.pop();                     
        }
        player = 1 - player; 
    }
    cout << player << " " << q.front() << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> stones(N);
        for (int i = 0; i < N; i++) {
            cin >> stones[i];
        }
        lastStoneAndWinner(N, stones);
    }
    return 0;
}
