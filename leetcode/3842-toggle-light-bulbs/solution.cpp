class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int,int> mp;
        for(auto p:bulbs)mp[p]++;
        vector<int> ans;
        for(auto p:mp){
            if(p.second%2==1) ans.push_back(p.first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};