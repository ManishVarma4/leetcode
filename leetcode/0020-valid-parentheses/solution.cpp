class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2==1) return 0;
        map<char,int> mp;
        mp['(']=1;
        mp['{']=2;
        mp['[']=3;
        mp[')']=-1;
        mp['}']=-2;
        mp[']']=-3;
        stack<int> stack;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                stack.push(mp[s[i]]);
            }
            else{
                if(stack.size()==0) return 0;
                int p=stack.top();
                stack.pop();
                if(p+mp[s[i]]!=0) return 0;
            }
        }
        if(stack.size()!=0) return 0;
        return 1;
    }
};