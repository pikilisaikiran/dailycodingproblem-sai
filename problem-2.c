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