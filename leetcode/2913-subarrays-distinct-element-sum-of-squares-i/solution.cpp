class Solution {
public:
    int sumCounts(vector<int>& nums) {
        set<int> st;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                st.insert(nums[j]);
                ans+=((int)st.size()*(int)st.size());
            }
            st.clear();
        }
        return ans;
    }
};