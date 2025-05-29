class Solution {
    int m, n;
    int MOD = 1e9 + 7;
    vector<vector<int>> grid;
    int target;
    unordered_map<int, unordered_map<int, unordered_map<int,int>>> memo;

    int dfs(int r, int c, int xorVal) {
        if (r == m - 1 && c == n - 1) {
            return (xorVal == target) ? 1 : 0;
        }
        if (r >= m || c >= n) return 0;

        if (memo.count(r) && memo[r].count(c) && memo[r][c].count(xorVal)) 
            return memo[r][c][xorVal];

        int res = 0;
        if (r + 1 < m) {
            res = (res + dfs(r + 1, c, xorVal ^ grid[r + 1][c])) % MOD;
        }
        if (c + 1 < n) {
            res = (res + dfs(r, c + 1, xorVal ^ grid[r][c + 1])) % MOD;
        }
        memo[r][c][xorVal] = res;
        return res;
    }

public:
    int countPathsWithXorValue(vector<vector<int>>& _grid, int k) {
        grid = _grid;
        target = k;
        m = grid.size();
        n = grid[0].size();
        memo.clear();
        return dfs(0, 0, grid[0][0]);
    }
};
sp