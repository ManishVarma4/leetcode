class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ans=0,cur=0;
        for(auto p:s){
            if(p=='('){
                st.push(p);
                cur++;
                ans=max(ans,cur);
            }
            else if(p==')'){
                st.pop();
                cur--;
                ans=max(ans,cur);
            }
        }
        return ans;
    }
};