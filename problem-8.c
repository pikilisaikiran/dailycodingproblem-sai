/*Given a list of integers, write a function that returns the largest sum of non-adjacent numbers. Numbers can be 0 or negative.

For example, [2, 4, 6, 2, 5] should return 13, since we pick 2, 6, and 5. [5, 1, 1, 5] should return 10, since we pick 5 and 5.*/
#include<stdio.h>
#include<stdlib.h>
int largestadsum(int* a,int n)
{   int s=0;
    int m=a[0];
    for(int i=1;i<n;i++)
    {
      int  ns=(s>m)?s:m;
      m=s+a[i];
      s=ns;
    }
    
    return (s>m)?s:m;
}
int main()
{
   //int* a=(int*)malloc(20*sizeof(int));
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("%d",largestadsum(a,n));
    return 0;
}