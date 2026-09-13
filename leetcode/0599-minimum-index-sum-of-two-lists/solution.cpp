class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int> mp,mp1;
        for(int i=0;i<list1.size();i++) mp[list1[i]]=i;
        for(int i=0;i<list2.size();i++) mp1[list2[i]]=i;
        int mini=INT_MAX;
        vector<string> ans;
        for(auto p: mp){
            if(mp1.find(p.first) != mp1.end()){
                int k=mp[p.first]+mp1[p.first];
                mini=min(mini,k);
            }
        }
        for(auto p: mp){
            if(mp1.find(p.first) != mp1.end()){
                int k=mp[p.first]+mp1[p.first];
                if(k==mini) ans.push_back(p.first);
            }
        }
        return ans;
    }
};