
"""
Given a string, find the palindrome that can be made by inserting the fewest number of characters 
as possible anywhere in the word. If there is more than one palindrome of minimum length that can
be made, return the lexicographically earliest one (the first one alphabetically).

For example,given the string 'race', you should return 'ecarace', since we can add three letters
to it(which is the smallest amount to make a palindrome). There are seven other palindromes that
can be made from 'race' by adding three letters, but 'ecarace' comes first alphabetically.
As another example, given the string 'google', you should return 'elgoogle'.
"""
def Min_ins_palin(strn):
    #check if the input string is palindrome of not
    if strn[::-1]==strn:
        return strn
    length = len(strn)
    # if the first and last characters are same then make a palindrome string
    # with that character at first
    if strn[0]==strn[-1]:
        return strn[0]+Min_ins_palin(strn[1:length-1])+strn[0]

    # if the first and last characters are diff then make two palindorme strings
    # and take the one with mininum length
    palin_with_start=strn[0]+Min_ins_palin(strn[1:])+strn[0]
    palin_with_last=strn[-1]+Min_ins_palin(strn[:length-1])+strn[-1]
    
    if len(palin_with_start)!=len(palin_with_last):
        return min(palin_with_start,palin_with_last,key=lambda s:len(s))

    # if the two palindrome strings are of same length return the lexicographically smaller one

    return min(palin_with_start,palin_with_last)
#Driver code
strn=input()
print(Min_ins_palin(strn))
print(Min_ins_palin('race'))
print(Min_ins_palin('google'))