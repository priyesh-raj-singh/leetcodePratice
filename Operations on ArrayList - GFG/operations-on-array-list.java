// { Driver Code Starts
//Initial Template for Java
import java.util.*;


 // } Driver Code Ends
//User function Template for Java

class Geeks
{
   // Function to insert element into list
   public static void insert(ArrayList<Integer> list, int x)
   {
       // Your code here
       list.add(x);
       
   }
   
   // Function to sort list in Increasing order
   public static void IncOrder(ArrayList<Integer> list)
   {
       // Your code here
       Collections.sort(list);
       
   }
   
   // Function to search element in the lise
   // val : element to be searched
   public static void Search(ArrayList<Integer> list, int val)
   {
       
       
       int flag = -1;
       /*
       Your Code here
        * */
        if(list.contains(val)){
            System.out.println(list.indexOf(val));
            flag =1;
        }
       if(flag == -1){
           System.out.println("-1");
       }
       
       
   }
   
   // Function to sort list in decreasing order
   public static void DecOrder(ArrayList<Integer> list)
   {
       // Your code here
       Collections.sort(list,Collections.reverseOrder());
   }
}


// { Driver Code Starts.

// Driver class with driver function
class GFG 
{
    // Driver code
	public static void main (String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		while(t-- > 0)
		{
		    // Declaring ArrayList
		    ArrayList <Integer> list = new ArrayList<Integer>();
		    int q = sc.nextInt();
		    
		    // Working through queries
		    while(q-- > 0)
		    {
		        char ch = sc.next().charAt(0);
		       Geeks obj = new Geeks();
		       if(ch == 'a')
		      {
		        int x = sc.nextInt();
		        obj.insert(list, x);
		      }
		    
		      if(ch == 'i')
		      {
		          obj.IncOrder(list);
		      }
		      
		      if(ch == 's')
		      {
		          int ele = sc.nextInt();
		          obj.Search(list, ele);
		      }
		      if(ch == 'd')
		      {
		          obj.DecOrder(list);
		      }
		      
		      
		    }
		 }
	}
}  // } Driver Code Ends