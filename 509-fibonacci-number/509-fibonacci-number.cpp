class Solution {
public:
    int fib(int n) {
        int p = 0 ; 
        int i = 1; 
        int count = 2;
        if(n<=1){
            return n;
        }
        while(count <=n){
            int temp = i; 
            i = i+p;
            p = temp;
            count++;
        }
        return i;
        
        
    }
};