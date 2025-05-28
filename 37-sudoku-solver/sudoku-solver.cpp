class Solution {
public:


    bool isSafe(int row, int col, char &val, vector<vector<char>>& board)
    {
        for(int i = 0; i < board.size(); i++){
            if(board[row][i] == val){
                return false;
            }

            if(board[i][col] == val){
                return false;
            }

            if(board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == val){
                return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board){
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board.size(); j++){
                if(board[i][j] == '.'){
                    for(char val = '1'; val <= '9'; val++){

                        if(isSafe(i, j, val, board)){
                            board[i][j] = val;
                            bool recursionAns = solve(board);
                            if(recursionAns == true){
                                return true;
                            }
                            else{
                                // backtrack
                                board[i][j] = '.';
                            }
                        }
                    }

                    return false;
                }
            }
            
        }

        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);

    }
};