#include<stdio.h>
#include<conio.h>
int A[10];
void insertion_sort(int n)
{
	int val,vacant,i;
	for(i=1;i<n;i++)
	{
		val=A[i];
		vacant=i;
		while(A[vacant-1]>val && vacant!=0)
		{
			A[vacant]=A[vacant-1];
			vacant=vacant - 1;
	}
     A[vacant]=val;			
	}
	printf("Successfully sorted using Insertion Sort Algorithm : \n");
}
void main()
{
	int n,i;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		printf("\n");
	}
	insertion_sort(n);
	for(i=0;i<n;i++)
	{
		printf("%d \n",A[i]);
		
	}
}
