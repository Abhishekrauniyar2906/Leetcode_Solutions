class Solution {
public:


    unordered_map<int, bool>rowCheck;
    unordered_map<int, bool>topDiagonal;
    unordered_map<int, bool>bottomDiagonal;

    void getSolution(int n, vector<vector<string>> &ans, vector<vector<char>> &board){
        vector<string>temp;
        for(int i = 0; i < n; i++){
            string output = "";
            for(int j = 0; j < n; j++){
              output.push_back(board[i][j]);
            }
            temp.push_back(output);
        }

        ans.push_back(temp);
    }
    bool isSafe(int row, int col, vector<vector<char>>&board){
        if(rowCheck[row] == true){
            return false;
        }

        if(topDiagonal[col - row] == true){
            return false;
        }

        if(bottomDiagonal[col + row] == true){
            return false;
        }

        return true;
    }
    void solve(int n, vector<vector<string>>&ans, int col, vector<vector<char>> &board){
        if(col >= n){
            getSolution(n,ans, board);
            return;
        }

        for(int row = 0; row < n; row++){
            if(isSafe(row, col, board)){
                board[row][col] = 'Q';
                rowCheck[row] = true;
                topDiagonal[col - row] = true;
                bottomDiagonal[row + col] = true;

                solve(n, ans,col + 1,  board);

                board[row][col] = '.';
                rowCheck[row] = false;
                topDiagonal[col - row] = false;
                bottomDiagonal[row + col] = false;

            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;

        int col = 0;
        vector<vector<char>>board(n,vector<char>(n,'.'));
        solve(n, ans, col, board);
        return ans;

    }
};