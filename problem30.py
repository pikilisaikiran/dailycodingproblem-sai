"""
You are given an array of non-negative integers that represents a two-dimensional elevation map where each element is
unit-width wall and the integer is the height. Suppose it will rain and all spots between two walls get filled up.

Compute how many units of water remain trapped on the map in O(N) time and O(1) space.

For example, given the input [2, 1, 2], we can hold 1 unit of water in the middle.

Given the input [3, 0, 1, 3, 0, 5], we can hold 3 units in the first index, 2 in the second, and 3 in the fourth index
(we cannot hold 5 since it would run off to the left), so we can trap 8 units of water.
"""
def units_of_water_trapped(elevation,n):
    res=0
    left=0
    right=n-1
    left_max=0
    right_max=0
    while(left<=right):
        if elevation[left]<=elevation[right]: 
            if elevation[left]>left_max:
                left_max=elevation[left]
            else:
                res+=left_max-elevation[left]
            left+=1
        else:
            if elevation[right]>right_max:
                right_max=elevation[right]
            else:
                res+=right_max-elevation[right]
            right-=1
    return res
#driver code
elevation=[int(i) for i in input('Enter the 2D elevation map :').split(" ")]
#print(elevation)
n=len(elevation)
result=units_of_water_trapped(elevation,n)
print(result)