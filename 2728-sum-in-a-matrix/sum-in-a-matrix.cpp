class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int row=nums.size();
        int col=nums[0].size();
        int sum=0;
        for(int i=0;i<row;i++){
            sort(nums[i].begin(),nums[i].end(),greater<int>());
        }
        

        for(int i=0;i<col;i++){
            int maxi=INT_MIN;
            for(int j=0;j<row;j++){
                maxi=max(maxi,nums[j][i]);

            }
            sum+=maxi;
        }
        return sum;

        
    }
};