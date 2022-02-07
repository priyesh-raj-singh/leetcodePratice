// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isProduct(int a[], int n, long long x) {
       set<int>s;
       for(int i=0;i<n;i++){
           if(a[i]!=0 && x%a[i]==0)
               if(s.find(x/a[i])!=s.end())return 1;
           s.insert(a[i]);
       }
       return 0;
   }
};

// { Driver Code Starts.

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        long long x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.isProduct(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}  // } Driver Code Ends