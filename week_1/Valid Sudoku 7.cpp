#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool isValidSudoku(vector<vector<int>>& board) {
    vector<unordered_set<int>> rows(9), cols(9), boxes(9);

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            int num = board[i][j];
            if (num == 0) continue;

            int boxIndex = (i / 3) * 3 + j / 3;
            if (rows[i].count(num) || cols[j].count(num) || boxes[boxIndex].count(num)) {
                return false;
            }
            rows[i].insert(num);
            cols[j].insert(num);
            boxes[boxIndex].insert(num);
        }
    }
    return true;
}

int main() {
    vector<vector<int>> board(9, vector<int>(9));
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> board[i][j];
        }
    }

    if (isValidSudoku(board)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
