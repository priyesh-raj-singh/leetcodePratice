class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int x = 0 , y = 0 , n = mat.size();
        for(int i = 0 ; i<n ; i++){
            x+=mat[i][i];
            y += mat[i][n-1-i];
        }
        if(n%2==0)
            return x+y;
        
        return x+y-mat[n/2][n/2];
        
        
    }
};