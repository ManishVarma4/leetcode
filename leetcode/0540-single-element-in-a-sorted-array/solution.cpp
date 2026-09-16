class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0,r=nums.size()-1,mid;
        while(l<r){
            mid=l+(r-l)/2;
            if(mid>0 && nums[mid]==nums[mid-1]){
                if(mid%2==1) l=mid+1;
                else r=mid-1;
            }
            else if(mid<nums.size()-1 && nums[mid]==nums[mid+1]){
                if(mid%2==0) l=mid+2;
                else r=mid;
            }
            else return nums[mid];
            
        }
        return nums[l];;
    }
};