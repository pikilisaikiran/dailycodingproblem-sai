"""
Given an array of numbers, find the maximum sum of any contiguous subarray of the array.

For example, given the array [34, -50, 42, 14, -5, 86], the maximum sum would be 137,
 since we would take elements 42, 14, -5, and 86.

Given the array [-5, -1, -8, -9], the maximum sum would be 0, since we would not take any elements.

Do this in O(N) time.
"""
import sys
def max_sum_cont_subarray(arr):
    max1 = -sys.maxsize -1
    max2 = -sys.maxsize -1
    sum=0
    for i in range(len(arr)):#checking for max sum form left to right
        sum+=arr[i]
        if sum>max1:
            max1=sum
    sum=0
    for j in range(len(arr)-1,-1,-1):#checking for max sum form right to left
        sum+=arr[j]
        if sum>max2:
            max2=sum
    if max(max1,max2)<0:# return the max of two sums
        return 0
    return max(max1,max2)
arr=[34, -50, 42, 14, -5, 86]
print(max_sum_cont_subarray(arr))

