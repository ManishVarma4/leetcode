class Solution {
public:
    int minAddToMakeValid(string s) {
        int l=0,c=0;
        for(auto p:s){
            if(p==')'){
                if(l==0) c++;
                else l--;
            }
            else l++;
        }
        c+=l;
        return c;
    }
};