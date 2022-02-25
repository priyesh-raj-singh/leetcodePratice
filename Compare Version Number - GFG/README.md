# Compare Version Number
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given two non-empty strings v1 and v2 denoting two version numbers. These strings can only contain digits or the '.' character which is used to separate number sequences. You need to compare the strings v1 and v2.&nbsp;</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">v1 = 0.2
v2 =  1.0
<strong>Output:
Explanation: </strong>Comparing the first level
before the first '.' we get 0&lt;1. So v1</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">v1 = 1.0.1
v2 = 1
<strong>Output:
Explanation: </strong>Comparing on the first level
we get 1=1. On the second level, we
consider v2 to be zero and we get 0=0.
On the third level, we again consider v2
to be zero while v1 is 1. So we get v1&gt;v2</span></pre>

<p><span style="font-size:18px"><strong>Input:&nbsp;</strong><br>
The first line of input contains the number of test cases T. For each test case, there will be two lines containing v1 and v2.</span></p>

<p><span style="font-size:18px"><strong>Output:</strong><br>
Return 1 if v1 &gt; v2.&nbsp;<br>
Return -1 if v1 &lt; v2.&nbsp;<br>
Return 0 otherwise.</span></p>

<p><span style="font-size:18px"><strong>User Task:</strong><br>
The task is to complete the function <strong>VersionCompare</strong>&nbsp;that takes v1 and v2 as arguments and return <strong>1 </strong>if v1 &gt; v2, <strong>-1</strong> if v1 &lt; v2, <strong>0</strong> otherwise.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N + M)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N + M)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N, M &lt;= 30,<br>
Here, N = length of v1, and M = length of v2.</span></p>
 <p></p>
            </div>