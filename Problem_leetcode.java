package constructor;

import java.util.Scanner;
/**
 * Given an integer array nums, find a contiguous non-empty subarray within the array that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

A subarray is a contiguous subsequence of the array.
asdf

 

Example 1:

Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
Example 2:

Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
 *
 */
public class Problem_leetcode {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int a[] = new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		int present=1;
		int max1= Integer.MIN_VALUE;
		int max2= Integer.MIN_VALUE;
		//calculating the product form left of the array and finding the maximum product
		for(int i=0;i<n;i++)
		{
			present=present*a[i];
			max1 = Math.max(max1, present);
			if(present==0)
				present=1;
					
		}
		present=1;
		//calculating the product form right of the array and finding the maximum product
		for(int i=n-1;i>0;i--)
		{
			present=present*a[i];
			max2 = Math.max(max2, present);
			if(present==0)
				present=1;
					
		}
		System.out.println(Math.max(max1, max2));
	}

}
