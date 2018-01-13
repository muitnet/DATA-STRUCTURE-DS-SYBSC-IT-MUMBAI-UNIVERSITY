#include<stdio.h>
#include<conio.h>
#define MAX 30
int stack[MAX];
int top =-1;   //Stack is empty.
void push();
int pop();
int peek();
void display();
int main()
{
           int choice;
	do
	{
		printf("\n **** Main Menu **** \n");
		printf("1.Push\n");
		printf("2.Pop \n");
		printf("3.Peek \n");
		printf("4.Display \n");
		printf("Enter your choice :");
		scanf("%d",&choice);
		printf("\n");
		switch(choice)
		{
			case 1: push();
			break;
			case 2 : pop();
			break;
			case 3 : peek();
			break;
			case 4 : display();
			break;
			case 5 : break;
		}
	}
	while(choice!=5);
	return 0;
}
void push()
{
           int val;
	if(top == MAX -1)
	{
		printf("Stack is full.");
	}		else
		{
			printf("Enter the value to be pushed : ");
			scanf("%d",&val);
			stack[++top]=val;
			printf("Successfully pushed.\n");
		}
}
int pop()
{
	if(top == -1)
	{
		printf("Stack is already empty.");
	}
	else
	{
		int val = stack[top];
		top--;
		printf("The value is popped : %d",val);
	}
}
int peek()
{
	if(top == -1)
	{
		printf("Stack is empty.");
	}
	else
	{
		int topmost = stack[top];
	printf("The topmost element of stack : %d ",topmost);
}
}
void display()
{
	if(top == -1)
	{
		printf("Stack is empty.");
	}
	else
	{
   int i;
    printf("Stack is : ");
    for(i=top;i>=0;i--)
    {
    	printf("\t%d",stack[i]);
	}
}}
