/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean isSymmetric(TreeNode root) {
        return sym(root.left,root.right);
    }
    public boolean sym(TreeNode one , TreeNode two){
        if(one==null&&two==null){
            return true;
        }else if(one==null||two==null){
            return false;
        }else if(one.val==two.val){
            return sym(one.left,two.right)&&sym(one.right,two.left);
        }else{
            return false;
        }
    }
}