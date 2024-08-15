#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void append(struct node **,int);
void display(struct node *);
int countnodes(struct node *);
int main()
{
    struct node *start=NULL;
    int choice,n;
    do
    {
        printf("\nSelect an operation:");
        printf("\n1.Append a node\n2.Display\n3.Count Nodes\n4.Quit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
                       printf("Enter the value to be added:");
                       scanf("%d",&n);
                       append(&start,n);
                       break;
        case 2:
                       display(start);
                       break;
        case 3:
                      printf("Total number of nodes in the list=%d",countnodes(start));
                      break;
        case 4:
                       printf("Thank you for using the app");
                       break;
        default:
                      printf("Wrong choice!Try Again");
        }

        }while(choice!=4);
    return 0;
    }
void append(struct node **ps,int x)
{
    struct node *p,*temp;
    p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf("Cannot add new nodes!");
        return;
    }
    p->data=x;
    p->next=NULL;
    if(*ps==NULL)
    {
        *ps=p;
         printf("\nNode successfully added");
         return;
    }
    temp=*ps;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=p;
    printf("\nNode successfully added");
}
void display(struct node *p)
{
    if(p==NULL)
    {
        printf("List is empty");
        return;
    }
    while(p!=NULL)
    {
        printf("\n%d",p->data);
        p=p->next;
    }
}
int countnodes(struct node *p)
{
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;

}
