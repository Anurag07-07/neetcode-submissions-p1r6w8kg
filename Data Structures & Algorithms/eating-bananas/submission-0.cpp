class Solution {
public:
    bool isPossible(vector<int> nums,int mid,int h){
        int count = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            count+=(nums[i]+(mid-1))/mid;
            if(count>h){
                return false;
            }
        }

        

        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int start = 1;
        int end = *max_element(piles.begin(),piles.end());
        int ans = start;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(isPossible(piles,mid,h)){
                ans = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }

        return ans;
    }
};
