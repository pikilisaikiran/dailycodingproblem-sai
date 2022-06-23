"""
Given a list of integers S and a target number k, write a function that returns 
a subset of S that adds up to k. If such a subset cannot be made, then return null.

Integers can appear more than once in the list. You may assume all numbers in the list are positive.

For example, given S = [12, 1, 61, 5, 9, 2] and k = 24, return [12, 9, 2, 1] since it sums up to 24.
"""
def find_subset(s,k):
    if not s: 
        return 
    num=s[0] 
    if num==k:
        return [num]
    subset=find_subset(s[1:],k-num) 
    if subset is not None:
        return [num] + subset 
    return find_subset(s[1:],k)
#driver code
s = [12, 1, 61, 5, 9, 2]
k = 25
print(find_subset(s,k))

