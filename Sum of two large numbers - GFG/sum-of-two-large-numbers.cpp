// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findSum(string X, string Y) {
        // Your code goes here
        string ans ;
        int carry = 0 ;
        int i = X.size()-1;
        int j = Y.size()-1;
        
        while(i>=0 || j>=0 || carry){
            int sum = 0 ;
            if(i>=0){
                sum+=X[i]-'0';
                i--;
            }
            if(j>=0){
                sum+=Y[j]-'0';
                j--;
            }
            sum+=carry;
            carry = sum/10;
            ans = to_string(sum%10) + ans;
        }
        int n = ans.size();
        while(1){
            if(ans[0]=='0' && ans.size()>1){
                ans.erase(ans.begin());
            }
            else{
                break;
            }
            
        }
        return ans;
    
    }
};

// { Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}  // } Driver Code Ends