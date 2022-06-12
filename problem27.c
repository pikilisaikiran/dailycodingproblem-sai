/*
Given a string of round, curly, and square open and closing brackets, return whether the brackets are balanced (well-formed).

For example, given the string "([])[]({})", you should return true.

Given the string "([)]" or "((()", you should return false.
*/
#include<stdio.h>
int main()
{
    char string[100];
    int count=0,i;
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]== '(' || string[i] == '[' || string[i]=='{')
        count++;
         if(string[i]== ')' || string[i] == ']' || string[i]=='}')
        count--;
    }
   
    if(count==0)
    printf("true");
    else
    printf("false");
    return 0;
}
