/*Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].*/
#include<stdio.h>
void newarray(int* a, int n,int p)
{   
     for(int i=0;i<n;i++)
    {
        a[i]=p/a[i];
    }
}
int main()
{
    int n,p=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        p=p*a[i];
    }
    //printf("%d\n",p);
    newarray(a,n,p);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
