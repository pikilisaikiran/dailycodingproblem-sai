'''
Given an array of integers where every integer occurs three times except for one integer, which only occurs once, find and return the non-duplicated integer.

For example, given [6, 1, 3, 3, 3, 6, 6], return 1. Given [13, 19, 13, 13], return 19.

Do this in O(N) time and O(1) space.
'''
def find_nonduplicate_num(input,n):
    if input[0]!=input[1]:
        return input[0]
    elif input[n-1]!=input[n-2]:
        return input[n-1]
    else:
        for i in range(1,n,3):
            if input[i]!=input[i-1]:
                return input[i-1]
    return 'no non-duplicate numbers'
input_list=[int(n) for n in input("Enter the elements :").split(' ')]
n=len(input_list)
input_list.sort()
print(input_list)
print(find_nonduplicate_num(input_list,n))
