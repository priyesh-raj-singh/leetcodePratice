# Find Maximum value
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:20px">Given an array A[ ] your task is to complete the&nbsp;function&nbsp;<strong>max_val</strong>&nbsp;which&nbsp;finds the maximum value of abs(i – j) * min(arr[i], arr[j]) where i and j vary from 0 to n-1.&nbsp;</span></p>

<p><strong><span style="font-size:20px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:20px">Input:</span></strong>
<span style="font-size:20px">N = 4
arr[] = 3 2 1 4</span>
<span style="font-size:20px"><strong>Output:</strong> 9</span>
<strong><span style="font-size:20px">Explanation:</span></strong>
<span style="font-size:20px">Here, a[0] = 3 and a[3] = 4 
and thus result is  
abs(0-3)*min(3,4) = 9.</span></pre>

<p><strong><span style="font-size:20px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:20px">Input:</span></strong>
<span style="font-size:20px">N= 4
arr[] = 8 1 9 4</span>
<span style="font-size:20px"><strong>Output:</strong> 16</span>
<strong><span style="font-size:20px">Explanation:</span></strong>
<span style="font-size:20px">Here, a[0]=8 and a[2]=9 thus 
result is abs(0-2)*min(8,9)=16. </span></pre>

<div><strong><span style="font-size:20px">Your task:</span></strong></div>

<div><span style="font-size:20px">You don't need to read input or print anything. Your task is to complete the function max_val() which takes the array and it's size as input and returns the maximum value&nbsp;of abs(i – j) * min(arr[i], arr[j]).</span></div>

<div>&nbsp;</div>

<div><span style="font-size:20px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)</span></div>

<div><strong><span style="font-size:20px">Expected Auxiliary Space: </span></strong><span style="font-size:20px">O(1)</span></div>

<div>&nbsp;</div>

<div><span style="font-size:20px"><strong>Constraints:</strong><br>
1&lt;=N&lt;=10^4<br>
-10^5&lt;=A[]&lt;=10^5</span><br>
<br>
<br>
&nbsp;</div>
 <p></p>
            </div>