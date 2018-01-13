#include<stdio.h>
#include<conio.h>
int size,val;
void disp(int size);
int sort(int size);
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
            printf("Enter your Choice : ");
            scanf("%d",&ch);
   	switch(ch)
   	{
   		case 1:disp(size);
   		break;
   	    case 2:sort(size);
   		break;
	   }
   }
   while(ch!=2);
getch ();
return 0;
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
int sort(size)
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
