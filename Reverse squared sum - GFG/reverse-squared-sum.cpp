#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0 ; i<n ; i++){
	        cin>>arr[i];
	    }
	    
	    int ans = 0 , pro = 0;
	    for(int i = n-1; i>=0 ;i-=2){
	        ans+=arr[i]*arr[i];
	    }
	    for(int i = n-2 ; i>=0 ; i-=2){
	        pro+=arr[i]*arr[i];
	    }
	    cout<<ans-pro<<endl;
	}
	return 0;
}