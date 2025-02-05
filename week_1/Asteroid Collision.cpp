#include <iostream>
#include <vector>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
    vector<int> stack;
    for (int asteroid : asteroids) {
        bool destroyed = false;
        while (!stack.empty() && asteroid < 0 && stack.back() > 0) {
            if (stack.back() < -asteroid) {
                stack.pop_back();
            } else if (stack.back() == -asteroid) {
                stack.pop_back();
                destroyed = true;
                break;
            } else {
                destroyed = true;
                break;
            }
        }
        if (!destroyed) {
            stack.push_back(asteroid);
        }
    }
    return stack;
}

int main() {
    int n;
    cin >> n;
    vector<int> asteroids(n);
    for (int i = 0; i < n; ++i) {
        cin >> asteroids[i];
    }

    vector<int> result = asteroidCollision(asteroids);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
