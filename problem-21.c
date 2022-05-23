/*Given an array of time intervals (start, end) for classroom lectures (possibly overlapping), find the minimum number of rooms required.

For example, given [(30, 75), (0, 50), (60, 150)], you should return 2.
*/
#include<stdio.h>
// structure to store classroom lectures
typedef struct time_intervals
{
    int start;
    int end;
}ti;
int main()
{
    int n;
    int temp1,temp2;
    int rooms=0,t=0;
    printf("Enter number of time intervals: ");
    scanf("%d",&n);
    ti a[n];
    // taking input for the user
    for(int i=0;i<n;i++)
    {
        printf("Enter the start time of lecture: ");
        scanf("%d",&a[i].start);
        printf("Enter the end time of lecture: ");
        scanf("%d",&a[i].end);
    }
    // sorting the lectures according to their timings
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i].start>a[j].start)
            {
                temp1=a[i].start;
                a[i].start=a[j].start;
                a[j].start=temp1;

                temp2=a[i].end;
                a[i].end=a[j].end;
                a[j].end=temp2;
            }
        }
    }
    // printing the sorted lectures
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i].start);
        printf("%d\n",a[i].end);
    }
    //comparing the current lecture start time with all the previous lectures end time
    // and finding if their are any overlapping lectures and thus calculating the minimum rooms required
    for(int i=0;i<n;i++)
    {
        int j=i-1;
        while (j>=0)
        {
            if(a[i].start > a[j].end)
            {
                t=1;
                break;
            }
            j--;
        }
        if(t==0)
        rooms++;
        
    }
    printf("The minimum rooms required for the lecture are: ");
    printf(" %d \n",rooms);
    return 0;
}