# Pairs with difference k
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array <strong>Arr</strong> of <strong>N</strong> positive integers. Find the number of pairs of integers whose difference is equal to a given number <strong>K</strong>.<br>
<strong>Note:</strong> (a, b) and (b, a) are considered same. Also, same numbers at different indices are considered different.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
N = 5
Arr[] = {1, 5, 3, 4, 2}
K = 3
<strong>Output:</strong> 2
<strong>Explanation:</strong> There are 2 pairs with difference 3, 
&nbsp;            the pairs are {1, 4} and {5, 2} </span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
N = 6
Arr[] = {8, 12, 16, 4, 0, 20}
K = 4
<strong>Output:</strong> 5
<strong>Explanation:</strong> There are 5 pairs with difference 4, 
&nbsp;            the pairs are {0, 4}, {4, 8}, 
             {8, 12}, {12, 16} and {16, 20} </span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>countPairsWithDiffK()</strong>&nbsp;which takes the array&nbsp;<strong>arr[],</strong>&nbsp;<strong>n </strong>and<strong> k</strong><strong>&nbsp;</strong>as inputs and returns an integer denoting&nbsp;the answer.<br>
<br>
<strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(max(Arr<sub>i</sub>))</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup><br>
0 &lt;= K &lt;= 10<sup>5</sup><br>
0 &lt;= Arr<sub>i</sub> &lt;= 10<sup>5</sup></span></p>

<p>&nbsp;</p>
 <p></p>
            </div>