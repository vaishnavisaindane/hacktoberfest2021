/*

Given a generic tree, find and return the node with second largest value in given tree. Return NULL if no node with required value is present.
Input format :
Elements in level order form separated by space (as per done in class). Order is - 

Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Output format:
Second Largest node data
Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 :
40

*/
public class Solution {

/*	TreeNode structure 
 * 
 * class TreeNode<T> {
		T data;
		ArrayList<TreeNode<T>> children;

		TreeNode(T data){
			this.data = data;
			children = new ArrayList<TreeNode<T>>();
		}
	}*/
	
	static TreeNode<Integer> largest = new TreeNode<Integer>(Integer.MIN_VALUE);
    static TreeNode<Integer> secondLargest = largest;
	public static TreeNode<Integer> findSecondLargest(TreeNode<Integer> root){


		// Write your code here
         if (root == null) {
            return null;
        }
         
        // Check if root's data is larger than current largest node's data
        if (root.data > largest.data) {
            secondLargest = largest;
            largest = root;
        } else if (root.data > secondLargest.data && root.data != largest.data)
            secondLargest = root;
         
        // recursively find second largest in children
        for (TreeNode<Integer> child: root.children)
            findSecondLargest(child);
        
        return secondLargest;
       

	}
	
	
}
