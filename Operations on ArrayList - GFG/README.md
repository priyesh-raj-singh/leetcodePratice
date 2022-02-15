# Operations on ArrayList
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an <strong>arraylist </strong>of integers. The task is to perform operations on ArrayList according to the queries and print output for the required queries.</span></p>

<p><span style="font-size:18px"><strong>Note</strong><span style="background-color:transparent; color:rgb(0, 0, 0); font-family:arial"><strong>: </strong>use </span><a href="https://www.geeksforgeeks.org/collections-sort-java-examples/" style="text-decoration:none;" target="_blank"><u>Collections.sort()</u></a><span style="background-color:transparent; color:rgb(0, 0, 0); font-family:arial"> to sort the list in natural order, </span><a href="https://www.geeksforgeeks.org/collections-reverseorder-java-examples/" style="text-decoration:none;" target="_blank"><u>Collections.reverseOrder()</u></a><span style="background-color:transparent; color:rgb(0, 0, 0); font-family:arial"> to arrange the elements in reverse, </span><a href="https://www.geeksforgeeks.org/arraylist-get-method-java-examples/" style="text-decoration:none;" target="_blank"><u>get()</u></a><span style="background-color:transparent; color:rgb(0, 0, 0); font-family:arial"> to return the element at index of the list, </span><a href="https://www.geeksforgeeks.org/collections-binarysearch-java-examples/" style="text-decoration:none;" target="_blank"><u>binarySearch()</u></a><span style="background-color:transparent; color:rgb(0, 0, 0); font-family:arial"> to find the index of the specified element in the list.</span></span></p>

<p><span style="font-size:18px"><strong>Input Format:</strong><br>
First line of input contains number of testcase <strong>T</strong>. For each testcase, first line of input contains Q, number of queries. Next line contains Q queries as:</span></p>

<ol>
	<li dir="ltr">
	<p dir="ltr"><span style="font-size:18px"><span style="background-color:transparent; color:rgb(0, 0, 0); font-family:arial"><strong>a x :</strong> <strong>inserts </strong>the element <strong>x </strong>at the <strong>end </strong>of the list.</span></span></p>
	</li>
	<li dir="ltr">
	<p dir="ltr"><span style="font-size:18px"><span style="background-color:transparent; color:rgb(0, 0, 0); font-family:arial"><strong>i :</strong> <strong>arrange </strong>the list in <strong>increasing </strong>order</span>.</span></p>
	</li>
	<li dir="ltr">
	<p dir="ltr"><span style="font-size:18px"><span style="background-color:transparent; color:rgb(0, 0, 0); font-family:arial"><strong>d :</strong> <strong>arrange </strong>the list in <strong>decreasing </strong>order</span>.</span></p>
	</li>
	<li dir="ltr">
	<p dir="ltr"><span style="font-size:18px"><span style="background-color:transparent; color:rgb(0, 0, 0); font-family:arial"><strong>s y :</strong> <strong>search </strong>for the element <strong>y </strong>in the list and prints the <strong>first-index(for duplicate) </strong>(<strong>0</strong>-<strong>based indexing</strong>) of that in the list. <strong>-1 if not found.</strong></span></span></p>
	</li>
</ol>

<p dir="ltr"><span style="font-size:18px"><strong>Output Format:</strong><br>
For each testcase, print the output according to the queries.</span></p>

<p dir="ltr"><span style="font-size:18px"><strong>Your Task:</strong><br>
Your task is to complete the functions <strong>insert()</strong>, <strong>IncOrder()</strong>, <strong>Search()</strong> and <strong>DecOrder()</strong> such that driver code will be able to perform required queries.</span></p>

<p dir="ltr"><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= T &lt;= 100<br>
1 &lt;= A[i] &lt;= 10<sup>6</sup><br>
1 &lt;= Q &lt;= 10<sup>3</sup></span></p>

<p dir="ltr"><span style="font-size:18px"><strong>Example:</strong><br>
<strong>Input:</strong><br>
2<br>
6<br>
a 2 a 3 a 4 a 2 i s 2<br>
5<br>
a 2 a 3 a 3 d s 5</span></p>

<p><span style="font-size:18px"><strong>Output:</strong><br>
0<br>
-1</span></p>

<p><span style="font-size:18px"><strong>Explanation:</strong><br>
<strong>Testcase 1:</strong> After inserting elements, list is (2, 3, 4, 2) and arranging them in ascending order, we have list as (2, 2, 3, 4). Now, serching for 2, first occurence is at 0<sup>th</sup> index.</span></p>

<p><span style="font-size:18px"><strong>Testcase 2:</strong> After inserting elements, list is (2, 3, 3) and arranging them in descending order, we have list as (3, 3, 2). Finding 5 gives<strong> -1</strong>, as <strong>5 is not present</strong>.</span></p>
 <p></p>
            </div>