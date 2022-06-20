"""
Given a string s, find the longest palindromic subsequence's length in s.

A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.

 

Example 1:

Input: s = "bbbab"
Output: 4
Explanation: One possible longest palindromic subsequence is "bbbb".
Example 2:

Input: s = "cbbd"
Output: 2
Explanation: One possible longest palindromic subsequence is "bb".
"""

def lps(str1,start,len,memo={}):#memo dictionary for memoization
    key=start,len
    if len==1:
        return 1
    if len==0:
        return 0
    if str1[start]==str1[start+len-1]:#if two characters are same at same positions from start and end
        memo[key]=2+lps(str1,start+1,len-2)#then add two(for the two characters) to the result
        return memo[key]
    memo[key]=max(lps(str1,start+1,len-1),lps(str1,start,len-1))# if both are not same take the max of 
    return memo[key]                                            # the next subsequence
#driver code
str1='cbbd'
len=len(str1)
start=0
print(lps(str1,start,len))
