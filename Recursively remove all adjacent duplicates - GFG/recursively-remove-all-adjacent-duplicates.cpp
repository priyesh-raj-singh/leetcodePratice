// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    string remove(string s){
        // code here
        string ans = "";
        int flag = 0;
        for(int i = 0 ; i<s.length() ; i++){
            while(s[i]==s[i+1]|| s[i-1]==s[i]){
                flag = 1;
                i++;
            }
            if(i<s.length()){
                ans+=s[i];
            }
        }
        if(flag==0){
            return ans;
        }
        return remove(ans);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.remove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends