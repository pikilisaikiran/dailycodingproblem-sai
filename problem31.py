"""
The edit distance between two strings refers to the minimum number of character insertions, deletions, and substitutions required to change one string to the other. 
For example, the edit distance between “kitten” and “sitting” is three: substitute the “k” for “s”, substitute the “e” for “i”, and append a “g”.

Given two strings, compute the edit distance between them.
"""
def edit_distance(a,b,n,m):
    result=0
    mat=[[0 for i in range(m+1)]for j in range(n+1)]
    """
    mat=[]
    for i in range(0,m+1):
        a=[]
        for j in range(0,n+1):
            a.append(0)
        mat.append(a)
    """
    for i in range(m+1):
        mat[0][i]=i
    for i in range(n+1):
        mat[i][0]=i
    print(mat)
    for i in range(1,n+1):
        for j in range(1,m+1):
            if a[j-1]==b[i-1]: #if the current letters of the two strings are same then no need of any edits
                mat[i][j]=mat[i-1][j-1] #just assign current value to the previous
            else:
                mat[i][j] = 1 + min(mat[i-1][j-1],mat[i-1][j],mat[i][j-1])
    print(mat)
    result=mat[n][m]
    return result
a="kitten"
b="sitting"
n=len(b)
m=len(a)
print(edit_distance(a,b,n,m))


