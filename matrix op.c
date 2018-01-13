#include<stdio.h>
#include<conio.h>
int arr1[20][10],arr2[20][10],arr3[20][10];
	int r1,c1,r2,c2;
void addition(int r1,int r2,int c1,int c2);
void multiplication(int r1,int r2,int c1,int c2);
void transpose1(int r1,int c1);
void transpose2(int r2,int c2);
void main()
{
    int i,j,k,choice;
	printf("Enter the matrix 1 size : \n");
	scanf("%d %d",&r1,&c1);
	printf("Enter the element in matrix 1 : \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		scanf("%d",&arr1[i][j]);
	}
	printf("Matrix 1 : \n");
		for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d \t",arr1[i][j]);
                         }
		printf("\n");
	}
	printf("Enter the matrix 2 size :");
	scanf("%d %d",&r2,&c2);
	printf("Enter the element in matrix 2 : \n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		scanf("%d",&arr2[i][j]);
	}
	 printf("Matrix 2 : \n");
		for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d \t",arr2[i][j]);
		}
		printf("\n");
	}
	do
	{	
	printf("******* Main Menu******* \n");
	printf("1.Addition\n");
	printf("2.Multiplication\n");
	printf("3.transpose 1\n");
	printf("4.transpose 2\n");
	printf("Enter your chioce : ");
scanf("%d",&choice);
	switch(choice)
	{
                        case 1 : addition(r1,r2,c1,c2);
		break;
		case 2: multiplication(r1,r2,c1,c2);
		break;
		case 3: transpose1(r1,c1);
	             break;
	            case 4 : transpose2(r2,c2);
	            break;
	}
	}while(choice>0);
	getch();
	}
	void addition(int r1,int r2,int c1,int c2)
	{
		int i,j;
		if(r1==r2 && c1==c2)
		{
			printf("Addition of matrix :\n");
		for(i=0;i<r1;i++)
		for(j=0;j<r2;j++)
		arr3[i][j]=arr1[i][j]+arr2[i][j];
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d \t",arr3[i][j]);
			}
			printf("\n");
		}
		}
		else
		{
			printf("ORDER INCORRECT. \n");
		}
	}
void multiplication(int r1,int r2,int c1,int c2)
{
	int i,j,k;
	if(c1==r2)
	{
		printf("Multiplication of matrix :\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				arr3[i][j]=0;
				int k;
				for(k=0;k<r1;k++)
				{
					arr3[i][j]+=arr1[i][k]*arr2[k][j];
				}
				printf("%d\t",arr3[i][j]);
			} printf("\n");
		}
	}
	else
	{
		printf("ORDER INCORRECT.\n");
	}
}
void transpose1(int r1,int c1)
{
	int i,j;
printf("Transpose matrix 1 \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				arr3[j][i]=arr1[i][j];
			}
		}
		for(i=0;i<c1;i++)
		{
			for(j=0;j<r1;j++)
			{
				printf("%d\t",arr3[i][j]);
			}
			printf("\n");
		}	
}
void transpose2(int r2,int c2)
{
	int i,j;
printf("Transpose matrix 2 \n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				arr3[j][i]=arr1[i][j];
			}
		}
		for(i=0;i<c2;i++)
		{
			for(j=0;j<r2;j++)
			{
				printf("%d\t",arr3[i][j]);
			}
			printf("\n");
		}	
}
