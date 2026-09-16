class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxi = 0, row = 0;
        
        for(int i = 0; i < mat.size(); i++) {
            int c = 0;
            for(int j = 0; j < mat[0].size(); j++) {
                c += mat[i][j];
            }
            if(c > maxi) {
                maxi = c;
                row = i;
            }
        }
        
        return {row, maxi};
    }
};