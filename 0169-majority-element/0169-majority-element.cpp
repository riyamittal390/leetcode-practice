class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // Bruteforce

        // int n = nums.size();
        // for (int i = 0 ; i < n ; i++) {
        //     int cnt = 0;
        //     for (int j = 0 ; j < n ; j++) {
        //         if (nums[j] == nums[i]) {
        //             cnt++;
        //         }
        //     }
        //     if (cnt > n/2) {
        //         return nums[i];
        //     }
        // }
        // return -1;





        // Better

        // int n = nums.size();
        // int freq = 1;
        // int ans = nums[0];
        // sort (nums.begin(), nums.end());

        // for (int i = 1 ; i < n ; i++) {
        //     if (nums[i] == nums[i-1]) {
        //         freq++;
        //     }
        //     else {
        //         freq = 1;
        //         ans = nums[i];
        //     }

        //     if (freq > n/2) {
        //         return nums[i];
        //     }
        // }

        // return nums[0];








        // Optimal

        int n = nums.size();
        int freq = 0;
        int ans = 0;

        for (int i = 0 ; i < n ; i++) {
            if (freq == 0) {
                ans = nums[i];
            }
            if (ans == nums[i]) {
                freq++;
            }
            else {
                freq--;
            }
        }

        return ans;
    }
};