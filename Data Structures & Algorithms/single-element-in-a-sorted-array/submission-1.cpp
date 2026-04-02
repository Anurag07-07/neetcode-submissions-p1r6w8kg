class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int ans = 0;
        // for(int x:nums){
        //     ans^=x;
        // }
        // return ans;
        int n = nums.size();
        int start = 0;
        int end = n-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if((mid-1<0 || nums[mid]!=nums[mid-1]) && (mid+1==n || nums[mid]!=nums[mid+1])){
                return nums[mid];
            }

            int leftelement = (mid-1>=0  && nums[mid]==nums[mid-1]) ? mid-1:mid;

            if(leftelement%2==1){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }

        return nums[0];
    }
};