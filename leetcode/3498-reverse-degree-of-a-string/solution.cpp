class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int l=int('z'-s[i])+1;
            int k=(l*(i+1));
            ans+=k;
        }
        return ans;
    }
};