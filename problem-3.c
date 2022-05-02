#include<stdio.h>
#include<stdlib.h>
int start_pos(int a[], int n)
{   int j=0,temp;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=0)
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            j++;
        }
    }
    return j;
}
int find_missing(int b[],int n)
{
    for(int i=0;i<n;i++)
    {
        int x= abs(b[i]);
        if(x-1< n && b[x-1]>0)
        {
            b[x-1]= -b[x-1];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(b[i]>0)
        return i+1;
    }
    return n+1;
}
int main()
{
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=start_pos(a,n);
    int b[n-k];
    int j=0;
    for(int i=k;i<n;i++)
    {
        b[j]=a[i];
        j++;
    }
   printf("%d",find_missing(b,n-k));
    return 0;
}