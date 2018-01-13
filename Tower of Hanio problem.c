#include<stdio.h>
#include<conio.h>
int move(int n,char source,char temp,char destination);
int main()
{
int n;
printf("enter number of Disk");
scanf("%d",&n);
move(n,'A','B','C');
getch();
return 0;
}
int move(int n,char source,char temp,char destination)
{
if(n == 1)
{
printf("\n Move from %c to %c",source,destination);
}
else
{
move(n-1,source,destination,temp);
move(1,source,temp,destination);
move(n-1,temp,source,destination);
}
}
