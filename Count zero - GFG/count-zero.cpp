// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int findCountUpto(long long int d){
        if(d < 1) return 0;
        
        long long int count = 9*(pow(10, d-1) - pow(9, d-1));
        
        return count + findCountUpto(d-1);
}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int d;
        cin >> d;
        Solution ob;
        cout<<ob.findCountUpto(d)<<endl;
    }
    return 0;
}
  // } Driver Code Ends