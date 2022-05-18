/* Given an array of integers and a number k, where 1 <= k <= length of the array, compute the maximum values of each subarray of length k.

For example, given array = [10, 5, 2, 7, 8, 7] and k = 3, we should get: [10, 7, 8, 8], since:

10 = max(10, 5, 2)
7 = max(5, 2, 7)
8 = max(2, 7, 8)
8 = max(7, 8, 7)
Do this in O(n) time and O(k) space. You can modify the input array in-place and you do not need to store the results.
You can simply print them out as you compute them.
*/
#include<stdio.h>
void problem(int a[],int n)
{
    int initial=0;
    int fast=0;
    int i=0,max;
    // taking two variables initial and fast 
    // keeping the initial variable constant for three loop exicutions and increamenting the fast variable to check the max number.
    // after 3 loop rotations increament initial to one location ahead and make fast to point the same variable.
    while( fast<n )
    {
        max=a[initial];
        if(a[fast]>max)
        {
            max= a[fast];
            initial = fast;
        }
        fast++;
        i++;

        if(i==3) // after 3 rotations printing the max value
        {
            
            initial=fast-2;
            fast=initial;
            
            printf("%d ",max);
            i=0;
        }

    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    problem(a,n);
    return 0;
}