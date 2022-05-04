/*Given the mapping a = 1, b = 2, ... z = 26, and an encoded message, count the number of ways it can be decoded.

For example, the message '111' would give 3, since it could be decoded as 'aaa', 'ka', and 'ak'.

You can assume that the messages are decodable. For example, '001' is not allowed.*/

#include<stdio.h>
#include<string.h>
int decode(char* a,int n)
{
    int count=0;
    if(n==0 || n==1)
    return 1;
    if(a[0]=='0')
    return 0;
    if(a[n-1]>'0')
    count=decode(a,n-1);
    if(a[n-2]=='1' || (a[n-2]=='2'&& a[n-1]<'7'))
    count +=decode(a,n-2);
    return count;
}
int main()
{
    char a[20];
    scanf("%s",a);
    int n=strlen(a);
    printf("%d",decode(a,n));

    return 0;
}