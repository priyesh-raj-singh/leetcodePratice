class NumArray {
public:
    vector<int> a;
    NumArray(vector<int>& nums) {
        for(int i = 0;i < (int)nums.size(); i++){
            if(i==0)a.push_back(nums[i]);
            else a.push_back(nums[i]+a.back());
        }
    }
    
    int sumRange(int left, int right) {
        int v = a[right];
        if(left == 0)return v;
        return v-a[left-1];
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */