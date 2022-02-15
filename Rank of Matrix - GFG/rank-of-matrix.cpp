

 

#include <iostream>
using namespace std;
int determenant(int arr[3][3])
{
   int det=arr[0][0]*(arr[1][1]*arr[2][2]-arr[1][2]*arr[2][1])-
            arr[0][1]*(arr[1][0]*arr[2][2]-arr[1][2]*arr[2][0])+
            arr[0][2]*(arr[1][0]*arr[2][1]-arr[1][1]*arr[2][0]);
            
            return det;
   
   
}
int main() {
   int t;
   cin>>t;
   
   for(int i=0;i<t;i++)
   {
int arr[3][3];
for(int k=0;k<3;k++)
{
    for(int j=0;j<3;j++)
    cin>>arr[k][j];
}
if(determenant(arr)!=0)
{
cout<<"3"<<endl;

}
else if(arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0]!=0)
cout<<"2"<<endl;

else if(arr[0][1]*arr[1][2]-arr[0][2]*arr[1][1]!=0)
cout<<"2"<<endl;

else if(arr[1][0]*arr[2][1]-arr[1][1]*arr[2][0]!=0)
cout<<"2"<<endl;

else if(arr[1][1]*arr[2][2]-arr[1][2]*arr[2][1]!=0)
cout<<"2"<<endl;

else 
cout<<"1"<<endl;



   }



return 0;
}