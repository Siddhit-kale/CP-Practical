#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> st;
    for (int asteroid : asteroids) {
        bool collision = false;
        while (!st.empty() && asteroid < 0 && st.top() > 0) {
            if (st.top() < -asteroid) {
                st.pop();
                continue;
            } else if (st.top() == -asteroid) {
                st.pop();
            }
            collision = true;
            break;
        }
        if (!collision) {
            st.push(asteroid);
        }
    }
    
    vector<int> result(st.size());
    for (int i = st.size() - 1; i >= 0; --i) {
        result[i] = st.top();
        st.pop();
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the number of asteroids: ";
    cin >> n;

    vector<int> asteroids(n);
    cout << "Enter the asteroids: ";
    for (int i = 0; i < n; ++i) {
        cin >> asteroids[i];
    }

    vector<int> result = asteroidCollision(asteroids);

    cout << "Resultant asteroids: ";
    for (int asteroid : result) {
        cout << asteroid << " ";
    }
    cout << endl;

    return 0;
}
