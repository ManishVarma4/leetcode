class Solution {
public:
    int minRotations(string s) {
        int ans=0;
        int curr=0;
        for(auto q:s){
            int p=q-'0';
            ans+=min(abs(p-curr),10-abs(p-curr));
            curr=p;
        }
        return ans;
    }
};