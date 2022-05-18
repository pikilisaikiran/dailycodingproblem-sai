'''
The area of a circle is defined as πr^2. Estimate π to 3 decimal places using a Monte Carlo method.

Hint: The basic equation of a circle is x2 + y2 = r2.
'''



import random


interval = 1000
circle_points = 0
square_points = 0

# to generate x and y randomly and checking if (x,y) lies inside the circle
for i in range(interval**2):
    rand_x= random.uniform(-1,1)
    rand_y = random.uniform(-1,1)
    # Distance between (x,y) from the origin
    origin_dist = rand_x**2 + rand_y**2
    # checking if (x,y) lies inside the circle
    if origin_dist<=1:
        circle_points +=1
    square_points +=1
    # pi = 4 * (no. of pints generated inside the circle)/ (no.of points generated inside the square)
    pi= 4* circle_points/ square_points

print("Final Estimation of Pi=",pi)