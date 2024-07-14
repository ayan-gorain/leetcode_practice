class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mpp;

        for(int i=0;i<n;i++){
            mpp[nums[i]]++;

        }
        int maxi=0;
         for(int i = 0; i < n; i++){
            maxi = max(maxi,mpp[nums[i]]);
        }
        int cnt = 0;

       for(int i = 0; i < nums.size(); i++){
            if(mpp[nums[i]]==maxi){
                cnt++;
            }
        }
        return cnt;

    
        
    }
};