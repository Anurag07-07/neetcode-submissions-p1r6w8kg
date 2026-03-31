class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
       int n = nums.size();
        vector<int> ans(n,0);
        ans[n-1] = -1;
        for(int i = n-2;i>=0;i--){
            ans[i] = max(ans[i+1],nums[i+1]);
        }
        return ans;  
    }
};