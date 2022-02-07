// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int marks,index;
};

void kTop(node a[],int n);


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        node a[n];
        for(int i=0;i<n;i++)
        cin>>a[i].marks,a[i].index=i;
        kTop(a,n);
        int k;
        cin>>k;
        int i=0;
        for(int j=0;j<k;j++)
        {
            int x=a[i].marks;
            while(i < n and a[i].marks==x)
            cout<<a[i].index<<" ",i++;
            if(i == n)
                break;
        }
        cout<<endl;
    }
}// } Driver Code Ends


/*struct node                 //Structure of the node
{                             
    int marks,index;
};
*/

bool cmp(node a,node b){
    
    if(a.marks == b.marks)
        return a.index<b.index;
    
    return a.marks>b.marks;
    
}

void kTop(node a[],int n)
{
    
    sort(a,a+n,cmp);
    
}
