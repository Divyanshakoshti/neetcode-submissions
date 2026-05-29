class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    //     sort(nums.begin(),nums.end());
    //     for(int i=1;i<nums.size();i++){
    //             if(nums[i]==nums[i-1]){
    //                 return true;
    //             }
    //     }
    // return false;
    unordered_set<int>s;
    for(int n:nums){
        if(s.contains(n)){
            return true;
        }
        s.insert(n);
    }
    return false;
    }
};