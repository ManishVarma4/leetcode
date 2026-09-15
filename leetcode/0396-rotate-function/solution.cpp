class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long int f=0,k=0,l;
        for(int i=0;i<nums.size();i++){k+=nums[i];f+=(i*nums[i]);}
        l=f;
        for(int i=1;i<nums.size();i++){
            l=l+(k-nums.size()*nums[nums.size()-i]);
            f=max(f,l);
        }
        return f;
    }
};