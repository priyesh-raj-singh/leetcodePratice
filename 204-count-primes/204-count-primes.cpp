class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1)
            return 0;
        vector<bool> isPrime(n , true);
        isPrime[0] = isPrime[1] = false;
        for(int i = 2 ; i<n ; i++)
            if(isPrime[i]==true)
                for(int j = 2*i ; j<n ; j+=i)
                    isPrime[j] = false;
        
        int ans = 0 ; 
        for(int i = 2 ; i<n ; i++)
            if(isPrime[i])
                ans++;
        
        return ans;
                
    }
};