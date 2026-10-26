class Solution {
public:
    bool isValid(int i,int j,int n,int m){
        return i>=0&&i<n&&j>=0&&j<m;
    }
    long long int solve(vector<vector<int>>& grid,vector<vector<int>>& seen,int i,int j,int n,int m){
        if(!isValid(i,j,n,m) || !seen[i][j] || !grid[i][j]) return 0;
        seen[i][j]=0;
        long long int x=grid[i][j];
        grid[i][j]=0;
        long long int k=solve(grid,seen,i+1,j,n,m);
        long long int l=solve(grid,seen,i,j+1,n,m);
        long long int q=solve(grid,seen,i-1,j,n,m);
        long long int w=solve(grid,seen,i,j-1,n,m);
        return x+k+l+q+w;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int n= grid.size();
        int m=grid[0].size();
        int ans=0;
        vector<vector<int>> seen(n,vector<int>(m,1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){
                    long long int cur =solve(grid,seen,i,j,n,m);
                    if(cur%k==0) ans++;
                }
            }
        }
        return ans;
    }
};