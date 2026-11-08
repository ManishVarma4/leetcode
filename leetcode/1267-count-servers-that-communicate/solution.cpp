class Solution {
public:
    bool valid(int i,int j,int n,int m){
        return i>=0&& i<n && j>=0 && j<m;
    }
    int search(vector<vector<int>>& grid, int i,int j, int n, int m, int c){
        if(!valid(i,j,n,m) || !grid[i][j]) return 0;
        c++;
        grid[i][j]=0;
        int q=0,r=0;
        for(int k=0;k<grid[0].size();k++){
            if(grid[i][k]){
                q+=search(grid,i,k,n,m,0);
            }
        }
        for(int k=0;k<grid.size();k++){
            if(grid[k][j]){
                r+=search(grid,k,j,n,m,0);
            }
        }
        return c+q+r;
    }
    int countServers(vector<vector<int>>& grid) {
        int n=grid.size();
        int m= grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!grid[i][j])continue;
                int k=search(grid,i,j,n,m,0);
                if(k>1) ans+=k;
            }
        }
        return ans;
    }
};