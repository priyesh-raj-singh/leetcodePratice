#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

# Function to count even and odd
# c_e : variable to store even count
# c_o : variable to store odd count
def count_even_odd(N, arr):
   e=0
   o=0
  
   for i in arr:
       if i%2==0:
           e+=1
       else:
           o+=1
   return (e,o)

#{ 
#Driver Code Starts.
# Driver Code
def main():
    
    # Testcase input
    testcases = int(input())
    
    # Looping through testcases
    while(testcases > 0):
        # size of array
        N = int(input())
        
        # array elements input
        array = input().split()
        # print (array)
        arr = list()
        for i in array:
            arr.append(int(i))
            
        # print (arr)
        
        # calling function to count even odd
        a = count_even_odd(N, arr)
        print (a[0], a[1])
        testcases -= 1
 
if __name__ == '__main__':
    main()
#} Driver Code Ends