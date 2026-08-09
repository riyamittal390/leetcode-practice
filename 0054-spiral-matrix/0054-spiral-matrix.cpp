class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // int n = matrix.size();
        // int m = matrix[0].size();

        // int left = 0, right = m-1;
        // int top = 0, bottom = n-1;

        // vector<int> ans;

        // while (top <= bottom && left <= right) {
        //     for (int i = left ; i <= right ; i++) {
        //     ans.push_back(matrix[top][i]);
        //     }
        //     top++;

        //     for (int i = top ; i <= bottom ; i++) {
        //         ans.push_back(matrix[i][right]);
        //     }
        //     right--;

        //     if (top <= bottom) {
        //         for (int i = right ; i >= left ; i--) {
        //             ans.push_back(matrix[bottom][i]);
        //         }
        //         bottom--;
        //     }

        //     if (left <= right) {
        //         for (int i = bottom ; i >= top ; i--) {
        //             ans.push_back(matrix[i][left]);
        //         }
        //         left++;
        //     }
        // }

        // return ans;



















        int m = matrix.size();
        int n = matrix[0].size();

        int starting_row = 0, ending_row = m-1;
        int starting_col = 0, ending_col = n-1;

        vector<int> ans;

        while (starting_row <= ending_row && starting_col <= ending_col) {
            for (int i = starting_col ; i <= ending_col ; i++) {
                ans.push_back(matrix[starting_row][i]);
            }

            for (int j = starting_row+1 ; j <= ending_row ; j++) {
                ans.push_back(matrix[j][ending_col]);
            }

            for (int i = ending_col-1 ; i >= starting_col ; i--) {
                if (starting_row == ending_row) {
                    break;
                }
                ans.push_back(matrix[ending_row][i]); 
            }
            for (int j = ending_row-1 ; j >= starting_row+1 ; j--) {
                if (starting_col == ending_col) {
                    break;
                }
                ans.push_back(matrix[j][starting_col]);
            }

            starting_row++; ending_row--;
            starting_col++; ending_col--;
            }

            return ans;
    }
};