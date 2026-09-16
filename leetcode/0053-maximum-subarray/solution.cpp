class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur=0,sum=nums[0];
        for(auto p: nums){
            cur+=p;
            sum=max(sum,cur);
            cur=max(cur,0);
        }
        return sum;
    }
};