class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,n=nums.size();
        int sum=0,minlen=INT_MAX;
        for(int r=0;r<n;r++){
            sum+=nums[r];
            while(sum>=target){
                minlen=min(minlen,r-l+1);
                sum-=nums[l];
                l++;
            }
        }
    return minlen==INT_MAX?0:minlen;
    }
};