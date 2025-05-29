class Solution {
public:
    void f(vector<vector<int>> &grid, int low, int high, int st, int er, int sc, int ec) {
        if (low == high) {
            grid[st][sc] = high;
            return;
        }
        f(grid, low, low + (high - low) / 4, st, st + (er - st) / 2, sc + 1 + (ec - sc) / 2, ec);
        f(grid, low + 1 + (high - low) / 4, low + (high - low) / 2, st + 1 + (er - st) / 2,
          er, sc + 1 + (ec - sc) / 2, ec);
        f(grid, low + 1 + (high - low) / 2, low + 3 * (high - low) / 4,
          st + 1 + (er - st) / 2, er, sc, sc + (ec - sc) / 2);
        f(grid, low + 3 * (high - low) / 4 + 1, high,
          st, st + (er - st) / 2, sc, sc + (ec - sc) / 2);
    }

    vector<vector<int>> specialGrid(int n) {
        vector<vector<int>> grid(1 << n, vector<int>(1 << n, 0));
        int low = 0, high = (1 << (2 * n)) - 1;
        f(grid, low, high, 0, (1 << n) - 1, 0, (1 << n) - 1);
        return grid;
    }
};
