//maximum product sub-array in an array
/**
 * Given an integer array nums, find a contiguous non-empty subarray within the array that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

A subarray is a contiguous subsequence of the array.

 

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
#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements :\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int present=1;
    int max1=INT_MIN;
    int fast=0;
    int max2=INT_MIN;
    int max;
    //calculating the product form left of the array and finding the maximum product
    while(fast<n)
    {
        present=present*a[fast];
        if(present>max1)
            max1=present;
        if(present==0)
            present=1;
        fast++;
    }
    fast=n-1;
    present=1;
    //calculating the product form right of the array and finding the maximum product
    while(fast>0)
    {
        present=present*a[fast];
        if(present>max2)
            max2=present;
        if(present==0)
            present=1;
        fast--;
    }
    max= (max1>max2) ? max1 : max2 ;
    printf("%d",max);
    return 0;   
}