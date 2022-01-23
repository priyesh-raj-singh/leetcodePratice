// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int oddAndEven(string S) {
        // code here
        int sum1 = 0;
        int sum2 = 0;
        for(int i =0 ; i<S.size() ; i+=2){
            sum1+=S[i]-'0';
        }
        for(int i = 1; i<S.size() ; i+=2){
            sum2+=S[i]-'0';
        }
        if(sum1!=sum2)  return 0;
        else return 1;
            
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.oddAndEven(S) << "\n";
    }
}  // } Driver Code Ends