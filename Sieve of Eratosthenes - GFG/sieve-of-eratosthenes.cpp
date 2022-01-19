// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        N++;
        vector<bool> isPrime(N,true);
        vector<int> ans;
        for(int i = 2 ; i<=N ; i++)
        for(int j = 2*i ; j<=N ; j+=i){
            isPrime[j] = false;
        }
        for(int i = 2 ; i<N ; i++){
            if(isPrime[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends