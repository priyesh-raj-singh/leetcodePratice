// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int countPairsWithDiffK(int arr[], int n, int k) {
	int maxEle = *max_element(arr, arr+n);
	vector <int> hash(maxEle + 1, 0);
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;
    int count = 0;
    for (int i = 0; i <= maxEle; i++) {
        if (hash[i]) {
            if (k == 0)
                count += (hash[i] * (hash[i] - 1)) / 2;
            else if (i + k <= maxEle)
                count += (hash[i] * hash[i + k]);
        }
    }
    return count;
}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, k;
        cin >> n >> k;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countPairsWithDiffK(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends