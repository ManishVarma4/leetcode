class Solution {
public:
    bool canAliceWin(int n) {
        bool ans =1;
        for(int i=10;i>=0;i--){
            if(i>n) return !ans;
            n-=i;
            ans=!ans;
        }
        return ans;
    }
};