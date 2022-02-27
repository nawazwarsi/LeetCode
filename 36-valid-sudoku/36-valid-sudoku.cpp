class Solution {
public:
bool c3(vector<vector<char>>& board, int n) {
    for (int i{}; i < n; i++) {
        vector<bool> ck(9, 0);
        for (int j{}; j < 9; j++) {
            char c = board[j][i];
            if (c == '.') continue;
            int cc = c - '0';
            if (ck[cc - 1] == 0) ck[cc - 1] = 1;
            else return 0;
        }
    }

    return 1;
}

bool c2(vector<vector<char>>& board, int n) {
    for (int i{}; i < n; i++) {
        vector<bool> ck(9, 0);
        for (int j{}; j < 9; j++) {
            char c = board[i][j];
            if (c == '.') continue;
            int cc = c - '0';
            if (ck[cc - 1] == 0) ck[cc - 1] = 1;
            else return 0;
        }
    }

    return c3(board, n);
}

bool c1(vector<vector<char>>& board, int n) {

    for (int i{}; i < n; i += 3) {
        for (int j{}; j < n; j += 3) {
            vector<bool> ck(9, 0);
            for (int x = 0; x < 9; x++) {
                char c = board[i+x/3][j+x%3];
                if (c == '.') continue;
                int cc = c - '0';
                if (ck[cc - 1] == 0) ck[cc - 1] = 1;
                else return 0;
            }
        }
    }
    return c2(board, n);
}

bool isValidSudoku(vector<vector<char>>& board) {
    int m = board.size();
    int n = board[0].size();
    if (m != n || m % 3 != 0) return 0;

    return c1(board, n);
}
};