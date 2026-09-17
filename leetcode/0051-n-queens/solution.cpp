class Solution {
public:
    void solve(int row,int n,vector<string>& board,vector<vector<string>>& ans,vector<bool>& cols,vector<bool>& diag1,vector<bool>& diag2){
        if(n==row){
            ans.push_back(board);
            return;
        }
        for(int col=0;col<n;col++){
            int d1=row+col;
            int d2=row-col+n;

            if(cols[col]||diag1[d1]||diag2[d2]) continue;
            board[row][col]='Q';
            cols[col]=diag1[d1]=diag2[d2]=1;
            solve(row+1,n,board,ans,cols,diag1,diag2);
            board[row][col]='.';
            cols[col]=diag1[d1]=diag2[d2]=0;
        }

    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));
        vector<bool> cols(n,0);
        vector<bool> diag1(2*n,0);
        vector<bool> diag2(2*n,0);
        solve(0,n,board,ans,cols,diag1,diag2);
        return ans;
    }
};