class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            int a = nums[i];
            int rem = target - a;
            if (mpp.find(rem) != mpp.end()) {
                return {mpp[rem], i};
            }
            mpp[a]=i;
        }
        return{-1,-1};
    }
};