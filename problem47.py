"""
Given a array of numbers representing the stock prices of a company in chronological order, write a 
function that calculates the maximum profit you could have made from buying and selling that stock once. 
You must buy before you can sell it.

For example, given [9, 11, 8, 5, 7, 10], you should return 5, since you could buy the stock at 5 dollars 
and sell it at 10 dollars.
"""

def max_pro(arr):
    max=0
    for i in range(len(arr)):
        for j in range(i,len(arr)):
            d=arr[j]-arr[i]
            if d>max:
                max=d
                mark=arr[i]
    return mark
arr=[9,11,8,5,7,10]
print(max_pro(arr))