

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;

        // Calculate the sum of the first 'k' elements
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        // Initialize the maximum sum as the sum of the first 'k' elements
        int maxSum = sum;

        // Use a sliding window to calculate the sum of other subarrays of length 'k'
        for (int i = k; i < n; i++) {
            sum += nums[i] - nums[i - k];  // Slide the window to the right
            maxSum = max(maxSum, sum);  // Update the maximum sum
        }

        // Calculate and return the maximum average
        return (double)maxSum / k;
    }
};
