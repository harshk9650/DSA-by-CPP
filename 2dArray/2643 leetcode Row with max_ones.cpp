class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> arr;

        int n = mat.size();
        int max_ones = INT_MIN;
        int row = -1;

        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }

            if(count>max_ones){
                max_ones = count;
                row = i;
            }
        }

        arr.push_back(row);
        arr.push_back(max_ones);

        return arr;
    }
};
