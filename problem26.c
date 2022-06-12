/*
Given a singly linked list and an integer k, remove the kth last element from the list. k is guaranteed to be smaller than the length of the list.
*/
#include <stdio.h>
#include <stdlib.h>
//sturcture to store a linked list
struct node
{
    int data;
    struct node* link;
};

//creating a linked list with a starting address
struct node* root =NULL;
//appending data to linked list
struct node* append(struct node* root)
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL){
        root = temp;
    }
    else
    {
        struct node* p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
    return root;
}
//removing the kth last element of the linked list
void removeklast(struct node* root,int k)
{
    struct node* temp;
    struct node* prev;
    prev=root;
    temp=root;
    int i=0;
    while(i<=k)
    {
        if(temp!=NULL && i!=k)
        {
            prev=temp;
            temp=temp->link;
        }
        if(i==k)
        {
            prev->link=temp->link;
            free(temp);
        }
        i++;
    }
}
// funtion to print the linked list
void printlist(struct node* root)
{
    struct node* temp= root;
    while (temp != NULL)
    {
        printf(" %d ",temp->data);
        temp = temp->link;
    }
}
//driver code
int main()
{
    int n;
    printf("Enter number of nodes in the linked list");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        root=append(root);
    }
    printf("To remove kth last element \n Enter K: ");
    int k,q;
    scanf("%d",&k);
    q=n-k;
    removeklast(root,q);
    printlist(root);
    return 0;
}

