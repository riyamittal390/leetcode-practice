class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // vector<vector<int>> r(numRows);

        // for (int i = 0 ; i < numRows ; i++) {
        //     r[i].resize(i+1);
        //     r[i][0] = r[i][i] = 1;

        //     for (int j = 1 ; j < i ; j++) {
        //         r[i][j] = r[i-1][j-1] + r[i-1][j];
        //     }
        // }
        
        // return r;


















        vector<vector<int>>ans;
        vector<int>temp;

        for (int i = 0 ; i < numRows ; i++) { 
            for (int j = 0 ; j <= i ; j++) {
                if (j == 0 || j == i) {
                    temp.push_back(1);
                }
                else {
                    int val = ans[i-1][j-1] + ans[i-1][j];
                    temp.push_back(val);
                }
            }

            ans.push_back(temp);
            temp.clear();
        }

        return ans;
    }
};