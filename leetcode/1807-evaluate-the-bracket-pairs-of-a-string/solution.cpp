class Solution {
public:
    string evaluate(string s, vector<vector<string>>& kno) {
        map<string,string> mp;
        for(auto p:kno) mp[p[0]]=p[1];
        int f=0;
        string ans="",w="";
        for(auto p:s){
            if(!f){
                if(p=='(')f=1;
                else ans+=p;
            }
            else{
                if(p==')'){
                    if(mp.find(w)!=mp.end()) ans+=mp[w];
                    else ans+='?';
                    w="";
                    f=0;
                }
                else w+=p;
            }
        }
        return ans;
    }
};