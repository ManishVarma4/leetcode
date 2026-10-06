class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> sti,stj;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    sti.insert(i);
                    stj.insert(j);
                }
            }
        }
        for(auto p:sti){
            for(int j=0;j<matrix[0].size();j++) matrix[p][j]=0;
        }
        for(auto p:stj){
            for(int i=0;i<matrix.size();i++) matrix[i][p]=0;
        }
    }
};