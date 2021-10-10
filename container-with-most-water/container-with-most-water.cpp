class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0 , left = 0 , right = height.size()-1;
        while(left<right){
            water = max(water , min(height[left] , height[right])*(right-left));
            if(height[left]>height[right])
                right--;
            else left++;
        }
        return water;
        
    }
};