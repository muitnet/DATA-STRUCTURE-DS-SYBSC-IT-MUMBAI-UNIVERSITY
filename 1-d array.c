#include<stdio.h>
#include<conio.h>
int size,val;
void disp(int size);
void sort(int size);
void reverse(int size);
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
   	printf("2.Sorting\n");
   	printf("3.Reverse\n");
            printf("Enter your Choice : ");
            scanf("%d",&ch);
   	switch(ch)
   	{
   		case 1:disp(size);
   		break;
   	    case 2:sort(size);
   		break;
   		case 3:reverse(size);
   		break;
   		case 4:printf("Enter value to be search : ");
   		scanf("%d",&val);
   		search(val,size);
		   break;
	   }
   }
   while(ch!=4);
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
void sort(size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Sorted Array : \n");
	for(i=0;i<size;i++)
	{
		printf("%d \n",arr[i]);
	}
}
void reverse(size)
{
	int i,j,temp;
	j=size-1;
	i=0;
	while(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	printf("Reverse order : \n");
		for(i=0;i<size;i++)
	{
		printf("%d \n",arr[i]);
	}
}
