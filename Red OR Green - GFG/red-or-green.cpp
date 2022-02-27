// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
       int RedOrGreen(int N,string S) {
           //code here
           unordered_map<char , int> mp;
           for(int i = 0 ; i<S.size() ; i++){
               mp[S[i]]++;
           }
           return min(mp['G'] , mp['R']);
                    
           
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N,S) << endl;
    }
    return 0;
}  // } Driver Code Ends