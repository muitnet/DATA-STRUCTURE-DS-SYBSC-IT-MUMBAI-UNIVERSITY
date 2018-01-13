#include<stdio.h>
#include<conio.h>
int size,val;
void disp(int size);
void search(int val,int size);
int arr[20];
int main()
{
   int i,ch;
   printf("Enter the size of array : ");
   scanf("%d",&size);
   for(i=0;i<size;i++)
   {
   	scanf("%d",&arr[i]);
   }
   do
   {
   	printf("\n****Main Menu****\n");
   	printf("1.Display\n");
   	printf("2.Search\n");
            printf("Enter your Choice : ");
            scanf("%d",&ch);
   	switch(ch)
   	{
   		case 1:disp(size);
   		break;
   		case 2:printf("Enter value to be search : ");
   		scanf("%d",&val);
   		search(val,size);
		   break;
	   }
   }
   while(ch!=2);
getch ();
return 0;
}
void search(int val,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
	 if(arr[i]==val)
	 {
	 	printf("Value is found at %d position.",i);
	 	break;
               }
	}
	if(i==size)
	{
		printf("Value is not found.");
	}
}
void disp(int size)
{
	int i;
	printf("Given Array :\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
}
