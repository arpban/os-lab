#include<stdio.h>
#include<conio.h>
main()
{
int n,m[20],i,j,ib[20],b[20][20];
printf("Enter no. of files:");
scanf("%d",&n);
for(i=0;i<n;i++)
{ printf("Enter index block :",i+1);
scanf("%d",&ib[i]);
printf("Enter blocks occupied by file%d:",i+1);
scanf("%d",&m[i]);
printf("enter blocks of file%d:",i+1);
for(j=0;j<m[i];j++)
scanf("%d",&b[i][j]);
} printf("\nFile\t index\tlength\n");
for(i=0;i<n;i++)
printf("%d\t%d\t%d\n",i+1,ib[i],m[i]);
printf("blocks occupiedare:");
for(i=0;i<n;i++)
{ printf("fileno%d",i+1);
for(j=0;j<m[i];j++)
printf("\t%d--->%d\n",ib[i],b[i][j]);
printf("\n");
}
getch();
}
