class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=nums[0],mini=nums[0],res=nums[0];
        for(int i=1;i<nums.size();i++){
            int p=nums[i];
            if(p<0) swap(maxi,mini);
            maxi=max(p,p*maxi);
            mini=min(p,p*mini);
            res=max(res,maxi);
        }
        return res;
    }
};