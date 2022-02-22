# Reorganize The Array
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array of elements of length <strong>N</strong>, ranging from <strong>0 to N-1</strong>, your task is to write a program that rearranges the elements of the array. All elements may not be present in the array, if the element is not present then there will be -1 present in the array. Rearrange the array such that A[i] = i and if i is not present, display -1 at that place.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> A[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1}
<strong>Output :</strong> -1 1 2 3 4 -1 6 -1 -1 9
<strong>Explanation:</strong>
Here We can see there are 10 elements. So, the sorted array
will look like {0, 1, 2, 3, 4, 5, 6, 7, 8, 9} but in our
array we are not having 0, 5, 7 and 8. So, at there places
we will be printing -1 and otherplaces will be having elements.

<strong>
Example 2:

Input :</strong> A[] = {2, 0, 1} <strong>
Output :</strong> 0 1 2</span></pre>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>Rearrange()</strong> that takes an array <strong>(arr)</strong>, sizeOfArray <strong>(n)</strong>, and return the array after rearranging it. The driver code takes care of the printing.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
0 ≤ N ≤ 10<sup>5</sup><br>
-1 ≤ A[] ≤ N-1<br>
<strong>All values are unique other than -1.</strong></span></p>
 <p></p>
            </div>