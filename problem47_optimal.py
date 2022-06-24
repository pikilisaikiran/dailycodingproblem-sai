"""
Given a array of numbers representing the stock prices of a company in chronological order, write a 
function that calculates the maximum profit you could have made from buying and selling that stock once. 
You must buy before you can sell it.

For example, given [9, 11, 8, 5, 7, 10], you should return 5, since you could buy the stock at 5 dollars 
and sell it at 10 dollars.
"""
def max_prof(arr):
    m=arr[0]
    prof=max(0,arr[1]-m)
    for i in range(len(arr)):
        m=min(m,arr[i])
        prof=max(prof,arr[i]-m)
    return prof
arr=[9,11,8,5,7,10]
print(max_prof(arr))

