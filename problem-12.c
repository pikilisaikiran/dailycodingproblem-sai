/*There exists a staircase with N steps, and you can climb up either 1 or 2 steps at a time. Given N, write a function that returns the number of unique ways you can climb the staircase. The order of the steps matters.

For example, if N is 4, then there are 5 unique ways:

1, 1, 1, 1
2, 1, 1
1, 2, 1
1, 1, 2
2, 2
*/
#include<stdio.h>
int fib(int n)
{   if(n==0 || n==1)
    return 1;
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",fib(n));
    return 0;
}