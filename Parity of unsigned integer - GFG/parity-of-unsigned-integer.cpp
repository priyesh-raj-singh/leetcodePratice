// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string computeParity(int n) {
        // code here
        int bits = 0;
        while(n){
            bits+=1;
            n = n&(n-1);
        }
        return (bits%2?"odd":"even");
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.computeParity(N) << endl;
    }
    return 0;
}  // } Driver Code Ends