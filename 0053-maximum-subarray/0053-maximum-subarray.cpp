class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // Better

        // int n = nums.size();
        // int maxSum = INT_MIN;

        // for (int st = 0 ; st < n ; st++) {
        //     int currentSum = 0;
        //     for (int end = st ; end < n ; end++) {
        //         currentSum += nums[end];
        //         maxSum = max(currentSum, maxSum);
        //     }
        // }
        // return maxSum;







        // Optimal

        int n = nums.size();
        int currentSum = 0;
        int maxSum = INT_MIN;

        for (int i = 0 ; i < n ; i++) {
            currentSum += nums[i];
            maxSum = max(maxSum, currentSum);

            if (currentSum < 0) {
                currentSum = 0;
            }
        }
        return maxSum;
    }
};