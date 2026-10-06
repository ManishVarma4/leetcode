class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        vector<int> ans;
        stack<int> a;
        for(auto p:ast){
            if(p<0){
                if(a.empty())ans.push_back(p);
                else{
                    int f=1;
                 while(!a.empty() && a.top()<=abs(p)){
                    if(a.top()==abs(p)){
                        a.pop();
                        f=0;
                        break;
                    }
                    else{
                        a.pop();
                    }
                 }
                 if(a.empty()&&f) ans.push_back(p);
                }
            }
            else{
              a.push(p);  
            }
        }
        int i=ans.size();
        while(!a.empty()){
            ans.push_back(a.top());
            a.pop();
        }
        reverse(ans.begin()+i,ans.end());
        return ans;
    }
};