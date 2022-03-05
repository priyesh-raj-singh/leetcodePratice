// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    #define ll long long

ll gcdhelper(ll A, ll B){
    if(A == 0)
        return B;

    return gcdhelper(B % A, A);
}

vector<ll> lcmAndGcd(ll A , ll B) {
    
    ll gcd = gcdhelper(A, B);
    ll lcm = (A * B) / gcd;
    
    return {lcm, gcd};
}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends