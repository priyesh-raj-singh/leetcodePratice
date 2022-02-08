// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    long long int sum(int n){
        int suma = 0;
        while(n>0){
            suma+=n%10;
            n/=10;
        }
        return suma;
    }
        long long int numberCount(long long int N, long long int K)
        {
            // your code here
            int count = 0;
            for(int i = 0 ; i<=N ; i++){
                long long int ans = sum(i);
                if(i-ans>=K){
                    count++;
                }
            }
            return count;
        }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, k;
		cin >> n >> k;
		Solution ob;
		cout <<ob.numberCount(n, k) << endl;
	}
	return 0;
}  // } Driver Code Ends