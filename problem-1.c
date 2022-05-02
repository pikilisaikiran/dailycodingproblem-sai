/*Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.*/

#include<stdio.h>
int find(int a[], int n, int k)
{   int f=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k)
            {
                f=1;
                break;
            }

        }
    }

    return f;
}
int main()
{
    int n,k;
    printf("Enter the number of element : ");
    scanf("%d",&n);
    printf("Enter the value of k : ");
    scanf("%d",&k);
    int a[n];
    printf("Enter the element : ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(find(a,n,k)==1)
    printf("true");
    else
    printf("false");
    return 0;
}
