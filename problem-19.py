"""
A builder is looking to build a row of N houses that can be of K different colors. He has a goal of minimizing cost 
while ensuring that no two neighboring houses are of the same color.Given an N by K matrix where the nth row and kth 
column represents the cost to build the nth house with kth color, return the minimum cost which achieves this goal.

"""
from calendar import c
def min_of_previous_house_painting_cost(previous_houses,j):
    del previous_houses[j]
    return min(previous_houses)
# total_cost_matrix funtion is used to store the minimum cost of painting the houses sequencially 
# here we paint the first house with all paints and store the cost in total_cost_matrix with respective colours
# then paint the second house with all paints and in total_cost_matrix we add the cost with minimum of the previous painted houses
# these is repeated till the last house 
# at last we take the last row elements and the minimum of the elements gives the answer.
def total_cost_matrix_function(cost_matrix,n,k):
    total_cost_matrix = []
    for i in range(n):
        a = []
        for j in range(k):
            a.append(int(0))
        total_cost_matrix.append(a)
    
    for i in range(n):
        if i==0:
            for j in range(k):
                total_cost_matrix[i][j]=cost_matrix[i][j]
        else:
            for j in range(k):
                total_cost_matrix[i][j]=cost_matrix[i][j] + min_of_previous_house_painting_cost(list(total_cost_matrix[i-1]),j)
    print(total_cost_matrix)
    return min(total_cost_matrix[-1])

# deriver code
n = int(input("Enter the number of rows :")) # n for number of houses
k = int(input("Enter the number of column :")) # k for number of colours

cost_matrix = []
print("Enter the cost matrix ")
# cost for painting nth house with kth paint is given here
for i in range(n): # taking the cost matrix input
    a = []
    for j in range(k):
        a.append(int(input()))
    cost_matrix.append(a)
print(total_cost_matrix_function(cost_matrix,n,k))
