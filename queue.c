#include<stdio.h>
#include<conio.h>
#define max 30
int rear=-1;
int front=-1;
void insert();
int deleteq();
void display();
int q[max];
void insert()
{	int val;
	printf("Enter value to be inserted :");
	scanf("%d",&val);
	if(rear==max-1)
	{
		printf("Queue is full.");
	}
	else if(front==-1)
	{
		front=rear=0;
		q[rear]=val;
		printf("Value inserted successfully.");
	}
	else
	{
		q[++rear]=val;
		printf("Value inserted successfully.");
	}
}
int deleteq()
{
	if(front==-1)
	{
		printf("Queue is already empty.");
		return -1;
	}
	else if(front==rear) //Only one item is present.
	{	int val ;
		val=q[front];
		front=rear=-1;
		printf("Value to be deletede : %d",val);
		return val;
	}
	else
	{
		int val ;
		val=q[front];
		front++;
		printf("Value to be deletede : %d",val);
		return val;
	}
}
void display()
{
	if(front==-1)
	{
		printf("Queue is empty.");
	}
	else
	{
	int i;
	printf("Queue is :");
	for(i=front;i<=rear;i++)
	{
		printf("%d",q[i]);
	}
}
}
int main()
{
	int choice;
	do
	{
		printf("\n **** Main Menu **** \n");
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display \n");
		printf("Enter your choice :");
		scanf("%d",&choice);
		printf("\n");
		switch(choice)
		{
			case 1: insert();
			break;
			case 2 : deleteq();
			break;
			case 3 : display();
			break;
			case 4 : break;
			}
	}
	while(choice!=4);
	return 0;
}
