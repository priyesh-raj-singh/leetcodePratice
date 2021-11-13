class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0 ,r = matrix[0].size()-1;
        while(r>=0 && l<matrix.size()){
            if(matrix[l][r]==target){
                return true;
            }
            else if(matrix[l][r]<target){
                l++;
            }
            else{
                r--;
            }
        }
        return false;
        
    }
};