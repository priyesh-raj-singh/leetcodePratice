// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> Smallestonleft(int arr[], int n);


int main() {
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n;
	    cin >> n;
	    int arr[n+1];
	    
	    for(int i=0;i<n;i++){
	        cin>> arr[i];
	    }
	    
	    vector<int> b;
	    b = Smallestonleft(arr, n);
	    for(int i=0;i<n;i++)
	        cout << b[i] << " ";
	       
	    cout << endl;
	    
	    
	}
	
	return 0;
}// } Driver Code Ends



vector<int> Smallestonleft(int arr[], int n)
{
    set<int,greater<int>>s; vector<int>v;
    for(int i=0; i<n; i++)
    {
        s.insert(arr[i]);
        auto it=s.upper_bound(arr[i]);
        if(it==s.end()) v.push_back(-1); 
        else v.push_back(*it);
    }
    return v;
}