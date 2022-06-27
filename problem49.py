"""
Given an array of numbers, find the maximum sum of any contiguous subarray of the array.

For example, given the array [34, -50, 42, 14, -5, 86], the maximum sum would be 137,
 since we would take elements 42, 14, -5, and 86.

Given the array [-5, -1, -8, -9], the maximum sum would be 0, since we would not take any elements.

Do this in O(N) time.
"""
import sys
def max_sum_cont_subarray(arr):
    max_till_present = -sys.maxsize -1
    max1 = 0
    sum=0
    for i in range(len(arr)):
        max1=max1+arr[i]
        if max_till_present<max1:
            max_till_present=max1
        if max1<0:
            max1=0
    return max_till_present
arr=[34, -50, 42, 14, -5, 86,-1,-100]
print(max_sum_cont_subarray(arr))

