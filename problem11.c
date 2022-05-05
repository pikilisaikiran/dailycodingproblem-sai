/*Implement an autocomplete system. That is, given a query string s and a set of all possible query strings, return all strings in the set that have s as a prefix.

For example, given the query string de and the set of strings [dog, deer, deal], return [deer, deal].
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int *p=NULL;
    scanf("%d",&n);
    char s[n][20];
    char gs[20];
    scanf("%s",gs);
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    //printf("%s\n",gs);
    for(int i=0;i<n;i++)
    {
         p=(int *) strstr(s[i],gs);
        if(p)
        printf("%s\n",s[i]);

    }
    return 0;
}