class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n=target.size();
        sort(arr.begin(),arr.end());
        sort(target.begin(), target.end());
        return target == arr;
    }
};