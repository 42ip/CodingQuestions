class Solution {
public:
    void getallcombinations(int col, int n, vector<string> &board, vector<vector<string>> &ans, vector<int> &leftrow, vector<int> &lowerdiagonal, vector<int> &upperdiagonal) {
        if(col == n) {
            ans.push_back(board);
            return;
        }
        for(int row = 0; row < n; row++) {
            if(leftrow[row] == 0 && lowerdiagonal[row + col] == 0 && upperdiagonal[(n-1-row) + col] == 0) {
                board[row][col] = 'Q';
                leftrow[row] = 1;
                lowerdiagonal[row + col] = 1;
                upperdiagonal[(n-1-row) + col] = 1;
                getallcombinations(col + 1,n,board,ans,leftrow,lowerdiagonal,upperdiagonal);
                board[row][col] = '.';
                leftrow[row] = 0;
                lowerdiagonal[row + col] = 0;
                upperdiagonal[(n-1-row) + col] = 0;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board;
        vector<int> leftrow(n,0);
        vector<int> lowerdiagonal((2*n)+1,0);
        vector<int> upperdiagonal((2*n)+1,0);
        string str(n,'.');
        for(int i = 0; i < n ; i++)
            board.push_back(str);
        getallcombinations(0,n,board,ans,leftrow,lowerdiagonal,upperdiagonal);
        return ans;
    }
};
