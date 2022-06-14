"""
Compute the running median of a sequence of numbers. That is, given a stream of numbers,
print out the median of the list so far on each new element.
Recall that the median of an even-numbered list is the average of the two
middle numbers.
for example, given the sequence [2,1,5,7,2,0,5], your algorithm should print out:
    2 
    1.5
    2
    3.5
    2
    2
    2
"""
# funtion for finding the median
def median(input):
    if len(input)%2!=0:
        return input[int(len(input)/2)]
    else:
        res=input[int(len(input)/2)]+input[int(len(input)/2)-1]
        return res/2
# driver code
my_list=[int(n) for n in input().split(' ')] #taking the list input
print(my_list)
n=len(my_list)
for i in range(1,n+1):
    res=median(sorted(my_list[:i])) #sorting the elements of array upto (i-1)th index and passing to median funtion
    print(res)
