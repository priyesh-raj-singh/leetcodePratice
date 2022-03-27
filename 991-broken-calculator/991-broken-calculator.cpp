class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int ans = 0 ;
        while(target>startValue){
            ans++;
            if(target%2==0)
                target = target/2;
            else
                target = target+1;
        }
        ans = ans +(startValue - target);
        return ans;
        
    }
};