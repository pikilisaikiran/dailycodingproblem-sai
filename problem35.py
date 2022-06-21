"""
Given any array of strictly the characters 'R','G' and 'B', segregate the values of the 
array so that all the Rs come first, the Gs come second, and the Bs come last.
You can only swap elements of the array.
Do this in linear time and in-place.
For example, given the array ['G','B','R','R','B','R','G'], it should become
['R','R','R','G','G','B','B'].
"""

def grouping_chars(lst):
    pos=0   #taking a variable that points at the start of the array
    for i in range(len(lst)):
        if lst[i]=='R': #if the character in the array equals to R
            temp=lst[i] #swap the characters with the index pointed by pos variable
            lst[i]=lst[pos]
            lst[pos]=temp
            pos+=1
    for i in range(pos,len(lst)): #After R's we need G's
        if lst[i]=='G':           # So continue the process without changing the pos variable
            temp=lst[i]
            lst[i]=lst[pos]
            lst[pos]=temp
            pos+=1
    return lst

lst=['G','B','R','R','B','R','G']
print(grouping_chars(lst))

