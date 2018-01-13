#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
struct node *start=NULL;
struct node *create(struct node *start);
struct node *dispaly(struct node *start);
struct node *search(struct node *start);
int main()
{
start=create(start);
start=dispaly(start);
printf("\n");
start=search(start);
	getch ();
	return 0;
}
struct node *create(struct node *start)
{
	struct node *new_node=NULL,*temp=NULL;
	int val;
	printf("Enter -1 value to exit list.\n");
	printf("Enter the value : \n");
	scanf("%d",&val);
	while(val!=-1)
	{
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->info=val;
	if(start==NULL)
	{
		start=new_node;
		new_node->next=NULL;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new_node;
		new_node->next=NULL;
	}
	printf("Enter the value : \n");
	scanf("%d",&val);
}
printf("List is successfully created.\n");
return start;
}
struct node *dispaly(struct node *start)
{
	struct node *temp=NULL;
	temp=start;
	printf("List is :\n");
	while(temp!=NULL)
	{
		printf("%d \t",temp->info);
		temp=temp->next;
	}
	return start;
}
struct node *search(struct node *start)
{
int val,count;
struct node *temp;
printf("\nwhich value are you looking for?\n");
scanf("%d",&val);
count=1;
temp=start;
while(temp->info!=val && temp->next!=NULL)
{
temp=temp->next;
count++;
}
//temp=temp->next;
if(temp->next==NULL && temp->info!=val)
{
printf("value not found");
}
else if(temp->next==NULL && temp->info==val)
{
printf("value found at %d node",count);
}
else
{
printf("value found at %d node",count);
}
return start;
}
