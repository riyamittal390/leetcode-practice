class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // Bruteforce

        // int n = nums.size();
        // set<vector<int>> st;

        // for (int i = 0 ; i < n ; i++) {
        //     for (int j = i+1 ; j < n ; j++) {
        //         for (int k = j+1 ; k < n ; k++) {
        //             if (nums[i] + nums[j] + nums[k] == 0) {
        //                 vector<int> temp = {nums[i], nums[j], nums[k]};
        //                 sort (nums.begin(), nums.end());
        //                 st.insert(temp);
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>> ans (st.begin(), st.end());
        // return ans;







        // Better

        // int n = nums.size();
        // set<vector<int>> st;

        // for (int i = 0 ; i < n ; i++) {
        //     map<int, int> mpp;

        //     for (int j = i+1 ; j < n ; j++) {
        //         int num = nums[j];
        //         int moreNeeded = -nums[i] - num;

        //         if (mpp.find(moreNeeded) != mpp.end()) {
        //             vector<int> temp = {nums[i], num, moreNeeded};
        //             sort(temp.begin(), temp.end());
        //             st.insert(temp);
        //         }
        //         mpp[num] = j;
        //     }
        // }
        
        // vector<vector<int>> ans(st.begin(), st.end());

        // return ans;








        // Optimal

        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});
            
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }

                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }

                    left++;
                    right--;
                }

                else if (sum < 0) {
                    left++;
                }

                else {
                    right--;
                }
            }
        }

        return ans;
    }
};