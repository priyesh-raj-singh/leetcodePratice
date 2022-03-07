// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s;
    stack<int> s2;
    public:
       /*returns min element from stack*/
       int getMin(){
           if (s.empty()) {
               return -1;
           }
           return minEle;
       }
       
       /*returns poped element from stack*/
       int pop(){
           if (s.empty()) {
               return -1;
           }
           int top = s.top();
           s.pop();
           if (top == minEle) {
               int nxtMinEle = 999;
               while (!s.empty()) {
                   if (s.top() < nxtMinEle) {
                       nxtMinEle = s.top();
                   }
                   s2.push(s.top());
                   s.pop();
               }
               while (!s2.empty()) {
                   s.push(s2.top());
                   s2.pop();
               }
               minEle = nxtMinEle;
           }
           return top;
       }
       
       /*push element x into the stack*/
       void push(int x){
           if (s.empty()) {
               s.push(x);
               minEle = x;
           } else {
               if (x < minEle) {
                   minEle = x;
               }
               s.push(x);
           }
       }
};

// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends