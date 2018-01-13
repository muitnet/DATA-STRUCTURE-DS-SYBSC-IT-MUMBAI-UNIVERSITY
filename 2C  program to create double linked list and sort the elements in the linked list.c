#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{int data;
	struct node *next;
	struct node *prev;
};
struct node *start=NULL;
struct node *create(struct node *start);
struct node *display(struct node *start);
struct node *sort(struct node *start);
int main()
{
	start=create(start);
	start=display(start);
	printf("\n");
	printf("sort \t");
	start=sort(start);
}
struct node *create(struct node *start)
{
	struct node *new_node=NULL,*temp=NULL,prev;
	int val;
	printf("Enter the data or enter -1 to exit:");
	scanf("%d",&val);
	while(val!=-1)
	{
		new_node=(struct node*)malloc(sizeof(struct node));
		new_node->data=val;
		if(start==NULL)
		{
			start=new_node;
			new_node->next=NULL;
			new_node->prev=NULL;
		}
		else
		{
			temp=start;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=new_node;
			new_node->prev=NULL;
			new_node->next=NULL;
		}
		printf("enter the data or enter -1 to exit:");
		scanf("%d",&val);
	}
	printf("Linked list successfully created.\n");
	return start;
}
struct node *display(struct node *start)
{
	struct node *temp=NULL;
	temp=start;
	printf("\nThe Linked list is:");
	while(temp->next!=NULL)
	{
		printf("\t %d \t",temp->data);
		temp=temp->next;
	}
	if(temp->next==NULL)
	printf("%d \n",temp->data);
	printf("\n");
	return start;
}
struct node *sort(struct node*start)
{
struct node *temp1=start;
struct node *temp2,*temp;
int x;
while (temp1->next!=NULL)
{
	temp2=start;
	while(temp2->next!=NULL)
	{
		temp=temp2->next;
		if(temp2->data>temp->data)
		{
			x=temp->data;
			temp->data=temp2->data;
			temp2->data=x;
		}
		temp2=temp2->next;
	}
	temp1=temp1->next;
}
temp=start;
printf("The Linked List is:");
while(temp->next!=NULL)
{
	printf("%d \t",temp->data);
	temp=temp->next;
}
if(temp->next==NULL)
printf("%d \n",temp->data);
printf("\n");
return start;
}
