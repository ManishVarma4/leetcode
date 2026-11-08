class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n=grid.size();
        int m= grid[0].size();
        int ans=0;
        vector<int>row(m), col(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){
                    row[j]++;
                    col[i]++;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]){
                    if(row[j]>1 || col[i]>1) ans++;
                }
            }
        }
        return ans;
    }
};