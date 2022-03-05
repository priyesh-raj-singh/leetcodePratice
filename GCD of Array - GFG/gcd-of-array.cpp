// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	int gd(int a , int b){
	    if(b==0) return a;
	    
	    return gd(b , a%b);
	}
    int gcd(int n, int arr[])
    {
    	// Your code goes here
    	int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
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
        cin >> N;

        int arr[N];
        for(int i = 0; i < N; i++)
        	cin >> arr[i];
        Solution ob;
       	cout <<  ob.gcd(N, arr) << "\n";
   
    }
    return 0;
}  // } Driver Code Ends