class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> a(n*n+1,0);
        for(auto p:grid){
            for(auto q:p) a[q]++;
        }
        int aa,b;
        for(int i=1;i<a.size();i++){
            if(a[i]==2) aa=i;
            if(a[i]==0) b=i;
        }
        return {aa,b};
    }
};