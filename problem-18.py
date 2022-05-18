"""
Given an array of integers and a number k, where 1 <= k <= length of the array, compute the maximum values of each subarray of length k.

For example, given array = [10, 5, 2, 7, 8, 7] and k = 3, we should get: [10, 7, 8, 8], since:

10 = max(10, 5, 2)
7 = max(5, 2, 7)
8 = max(2, 7, 8)
8 = max(7, 8, 7)
Do this in O(n) time and O(k) space. You can modify the input array in-place and you do not need to store the results.
You can simply print them out as you compute them.
"""
def problem(b):
    # taking two variables initial and fast 
    # keeping the initial variable constant for three loop exicutions and increamenting the fast variable to check the max number.
    # after 3 loop rotations increament initial to one location ahead and make fast to point the same variable.
    initial=0
    fast=0
    i=0
    while fast<len(b):
        max=b[initial]
        if b[fast]>max :
            max=b[fast]
            initial=fast
        fast+=1
        i+=1
        if i==3:
            initial = fast-2
            fast=initial
            i=0
            print(max)
    return 0
# driver code
a=[]
n=int(input("Enter number of elements in the list :"))
for i in range(0,n):
    l=int(input())
    a.append(l)
problem(a)