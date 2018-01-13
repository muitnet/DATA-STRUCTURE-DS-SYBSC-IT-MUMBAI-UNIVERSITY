#include<stdio.h>
#include<string.h>
#define SIZE 30
int a[SIZE],n;
void maxheapify(int a[],int i,int n1);
void buildheap(int a[],int n1);
void heap_sort(int a[]);
void swap(int i,int j);
int length(int a[]);
int main()
{
	int i,j;
	printf("Enter the number of element:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("Enter a value:");
		scanf("%d",&a[i]);
		buildheap(a,i);
	}
	for(j=0;j<n;j++)
	{
		printf("%d",a[j]);
	
	}
	printf("\n");
}
void buildheap(int a[],int n1)
{
	int i,j;
	for(i=(n1/2)-1;i>=0;i--)
	{
		maxheapify(a,i,n1);
	}
	for(j=0;j<n1;j++)
	{
		printf("%d",a[j]);
	}
	printf("\n\n");
}
void maxheapify(int a[],int i,int n1)
{
	int max,l,r;
	max=i;
	l=2*i+1;
	r=2*i+2;
	if(l<n1&&r<n1)
	{
	if(a[l]>a[max])	
	{
		max=l;
	}
	if(a[r]>a[max])
	{
		max=r;
	}
	}	
	else if(l<n1&&r>=n1)
	{
		if(a[l]>a[max])
		{
			max=l;
		}
	}
	else if(l>=n1&&r<n1)
	{
		if(a[r]>a[max])
		{
			max=r;
		}
	}
	if(i!=max)
	{
		swap(i,max);
		maxheapify(a,max,n1);
	}
}
void swap(int i,int j)
{
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
int length(int a[])
{
	int i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	return i;
}
