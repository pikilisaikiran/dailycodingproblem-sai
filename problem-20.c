/**
 Given two singly linked lists that intersect at some point, find the intersecting node. The lists are non-cyclical.

For example, given A = 3 -> 7 -> 8 -> 10 and B = 99 -> 1 -> 8 -> 10, return the node with value 8.

In this example, assume nodes with the same value are the exact same node objects
 */
#include<stdio.h>
#include<stdlib.h>
// struct to implement linked list
struct node
{
    int data;
    struct node* link;
};
// taking two head pointers for linked list 1 and 2
struct node* root1 = NULL;
struct node* root2 = NULL;

// append funtion to add nodes to the linked list
struct node* append(struct node* root)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the node data :");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root == NULL)
    {
        root=temp;
    }
    else
    {
        struct node* p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link = temp;
        
    }
    return root;
}

// intersection funtion to find the intersection node data
int intersection(struct node* root1,struct node* root2)
{
    struct node* temp1;
    struct node* temp2;
    int ans,t=0;
    temp1=root1;
    temp2=root2;
    if(temp1==NULL || temp2==NULL)
    {
        printf("lists are empty");
    }
    else
    {
        // two loops for comparing the two linked list
        while(temp1!=NULL)
        {
        
            while (temp2!= NULL)
            {
    
                if(temp1->data == temp2->data)
                {
                    ans=temp1->data;
                    t=1;
                    break;
                }
                temp2=temp2->link;
                if(t==1)
                break;
            }
            temp1=temp1->link;
            temp2=root2;
            
        }
    }
    return ans;
}
// driver code
int main()
{
    int n,m;
    printf("Enter the number of nodes in linked list 1 :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        root1=append(root1);
    }
    printf("Enter the number of nodes in linked list 2 :");
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        root2=append(root2);
    }
    
    printf("The intersecting node is :%d",intersection(root1,root2));
    return 0;
}
