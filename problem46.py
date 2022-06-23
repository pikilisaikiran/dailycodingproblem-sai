"""
Given a string, find the longest palindromic contiguous substring. If there are more than one with 
the maximum length, return any one.

For example, the longest palindromic substring of "aabcdcb" is "bcdcb". The longest palindromic 
substring of "bananas" is "anana".
"""
def longest_palin_substr(str1):
    if str1[::-1]==str1:
        return str1
    pal1=longest_palin_substr(str1[1:])
    pal2=longest_palin_substr(str1[:-1])
    return max(pal1,pal2,key=lambda x:len(x))

str1='aabcdcb'
str1='bananas'
str1=''
print(longest_palin_substr(str1))


