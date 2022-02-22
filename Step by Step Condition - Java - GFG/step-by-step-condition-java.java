// { Driver Code Starts
//Initial Template for Java

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

class GFG {
	public static void main (String[] args) {
		
		//taking input using Scanner class
		Scanner sc = new Scanner(System.in);
		
		//taking testcases count
		int t=sc.nextInt();
		while(t-->0)
		{
		    //taking n
		    int n =sc.nextInt();
		
	        //creating an object of class Geeks	
		    Geeks obj=new Geeks();
		    
		    //calling isDivisbleByPrime()
		    //method of class Geeks
		    obj.isDivisibleByPrime(n);
		}
	
		
	}
}

 // } Driver Code Ends
//User function Template for Java


//Back-end complete function Template for Java
class Geeks {
	 static void isDivisibleByPrime (int n) 
	 {
             //Your code here
             String ans="";
             if(n%11==0){
                 ans = "Eleven";
             }
             else if(n%3==0){
                 ans = "Three";
             }
             else if(n%2==0){
                 ans = "Two";
             }
             else{
                 ans = "-1";
             }
       System.out.println(ans);
	 }

}

// { Driver Code Starts.

/*package whatever //do not write package name here */  // } Driver Code Ends