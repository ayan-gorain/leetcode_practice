class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            int su=nums[i];
            int rem=target-su;
            if(mpp.find(rem)!=mpp.end()){
                return {mpp[rem], i};
            }


            mpp[su]=i;

        }
        
        return {-1,-1};
        
    }
};