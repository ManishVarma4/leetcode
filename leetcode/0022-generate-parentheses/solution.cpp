class Solution {
public:
vector<string> ans;
    bool check(string s){
        stack<char> st;
        for(auto p:s){
            if(p=='(') st.push('(');
            else{
                if(st.empty()) return 0;
                st.pop();
            }
        }
        if(st.empty()) return 1;
        return 0;
    }
    void solve(int n,string s){
        if(n==0){
            if(check(s)) ans.push_back(s);
            return;
        }
        solve(n-1,s+"(");
        solve(n-1,s+")");
    }
public:
    vector<string> generateParenthesis(int n) {
        solve(2*n,"");
        return ans;
    }
};