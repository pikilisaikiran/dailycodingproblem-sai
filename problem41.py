"""
Given an unordered list of flights taken by someone, each represented as (origin,destination) pairs,
and a starting airport, compute the person's itinerary. If no such itinerary exists, return null.
If there are multiple possible itineraries, return the lexicographically smallest one. All flights
must be used in the itinerary.

For example, given the list of flights [('SFO','HKO'),('YYZ','SFO'),('YUL','YYZ'),('HKO','ORD')] and
starting airport 'YUL', you should return the list ['YUL','YYZ','SFO','HKO','ORD'].

Given the list of flights [('SFO','COM'),('COM','YYZ')] and starting airport 'COM', you should return
null.

Given the list of flights [('A','B'),('A','C'),('B','C'),('C','A')] and starting airport 'A', you 
should return the list ['A','B','C','A','C'] even though ['A','C','A','B','C'] is also a valid
itinerary. However, the first one is lexicographically smaller.
"""

def itinerary(lst,start):
    res=[]           #create a new list to store the result
    res.append(start)#append the start string to the list
    temp='['         #assign temp with value greater than 'Z'
    length=len(lst)
    for j in range(length):#iterate through the input list
        for i in lst:
            if i[0] == start: #check if the origin is same as starting airport
                if i[1]<temp:
                    temp=i[1] #store the lexicographically smaller destination airport in temp
                    mark=i   # mark i for removing the ith element (not accessing once again)
        res.append(temp)
        start=temp
        if temp=='[': # if there is no destination for any starting airport
            res=[]      #return the empty list
            return res
        temp='['        #assign temp value to greater than 'Z' again
        lst.remove(mark) # remove the marked i 
    return res

lst=[('A','B'),('A','C'),('B','C'),('C','A')]
start='A'
#lst=[('SFO','COM'),('COM','YYZ')]
#start='COM'
#lst=[('SFO','HKO'),('YYZ','SFO'),('YUL','YYZ'),('HKO','ORD')]
#start='YUL'
print(itinerary(lst,start))


