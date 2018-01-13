#include<stdio.h>
#include<conio.h>
int main()
{
	int arr1[20],arr2[20],arr3[40];
	int i,j,k,size1,size2,temp;
	 printf("Enter the array size of array 1 :");
	 scanf("%d",&size1);
	 printf("Enter the element in arra 1 :\n");
	 for(i=0;i<size1;i++)
	 {
	 	scanf("%d",&arr1[i]);
	 }
	 printf("Enter the size of array 2 : ");
	 scanf("%d",&size2);
	 printf("Enter the element in array2 : \n");
	 for(j=0;j<size2;j++)
	 {
	 	scanf("%d",&arr2[j]);
	 }
             for(i=0;i<size1;i++)
	 {
	 	for(j=0;j<size1-i-1;j++)
	 	{
	 		if(arr1[j]>arr1[j+1])
	 		{
	 		temp=arr1[j];
	 		arr1[j]=arr1[j+1];
	 		arr1[j+1]=temp;
	 	    }
		 }
                 }
	 for(i=0;i<size2;i++)
	 {
	 	for(j=0;j<size2-i-1;j++)
	 	{
	 		if(arr2[j]>arr2[j+1])
	 		{
	 		temp=arr2[j];
	 		arr2[j]=arr2[j+1];
	 		arr2[j+1]=temp;
	 	    }
		 }
	 }
	/* printf("Sorting array 1\n");
	 for(i=0;i<size1;i++)
	 {
	 	printf("%d \n",arr1[i]);
	 }
    printf("Sorting array 2\n");
	 for(i=0;i<size2;i++)
	 {
	 	printf("%d \n",arr2[i]);
	 }*/
	 i=0;
	 j=0;
	 k=0;
	 while(i<size1 && j<size2)
	 {
	 	if(arr1[i]<arr2[j])
	 	{
	 	arr3[k]=arr1[i];
		 i++;
		 k++;
		}
		 else
		 {
		 	arr3[k]=arr2[j];
		 	j++;
		 	k++;
		 }
	   } 
	 while(i<size1)
	 {
	 	arr3[k]=arr1[i];
	 	i++;
	 	k++;
	 }
	 while(j<size2)
	 {
	 	arr3[k]= arr2[j];
	 	j++;
	 	k++;
	 }
             printf("merged array \n");
	 for(k=0;k<size1+size2;k++)
	 printf("%d \n",arr3[k]);
	 getch();
	 return 0;
}
