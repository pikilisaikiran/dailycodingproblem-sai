/*You run an e-commerce website and want to record the last N order ids in a log. Implement a data structure to accomplish this, with the following API:

record(order_id): adds the order_id to the log
get_last(i): gets the ith last element from the log. i is guaranteed to be smaller than or equal to N.
*/
#include<stdio.h>
typedef struct tostore_logs
{
    int orderid;
}log;
// record to store logs
void record(int N,log a[])
{
   
    // to store the order_ids into the log

    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i].orderid);
    }
}
void get_last(int N,int i,log a[])
{
    int start = N-i;
    for(int j=start; j<N; j++)
    {
        printf("%d \n",a[j].orderid);
    }
}
int main()
{
    int N;
    printf("Enter the number of last order ids you want to record :");
    scanf("%d",&N);
    log a[N];
    //calling the record function
    record(N,a);
    int i;
    printf("Enter the number of last entries you want :");
    scanf("%d",&i);
    //calling get function
    get_last(N,i,a);
    return 0;
}