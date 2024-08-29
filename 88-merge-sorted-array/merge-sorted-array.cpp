class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Create a result vector to hold the merged and sorted elements
        vector<int> result(m + n);

        // Copy elements from the first array into the result
        for (int i = 0; i < m; i++) {
            result[i] = nums1[i];
        }

        // Copy elements from the second array into the result
        for (int i = 0; i < n; i++) {
            result[m + i] = nums2[i];
        }

        // Sort the result vector
        sort(result.begin(), result.end());

        // Copy the sorted result back into nums1
        for (int i = 0; i < m + n; i++) {
            nums1[i] = result[i];
        }
    }
};