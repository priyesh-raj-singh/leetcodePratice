// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string str) {
    int n = str.length();
    int m = pat.length();
    
    if(m > n) return (0);
    
    vector<int> fpat(26,0); for(int i=0; i<m; i++) fpat[pat[i]-'a']++;
    vector<int> fstr(26,0);
    
    int ans = 0, i;
    for(i = 0; i<m; i++){
        fstr[str[i]-'a']++;
    }
    if(fstr == fpat) ans++;
    
    for(; i<n; i++){
        fstr[str[i-m]-'a']--;
        fstr[str[i]-'a']++;
        if(fpat == fstr) ans++;
    }
    
    return (ans);
}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends