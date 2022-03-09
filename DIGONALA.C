#include<stdio.h>
#include<conio.h>
void main()
{
     int a1[3][3],a2[3][3],sum[3][3],i,j;
     clrscr();
     for(i=0;i<3;i++)
     {
	 for(j=0;j<3;j++)
	 {
	       printf("Enter the value for a[%d][%d]:",i,j);
	       scanf("%d",&a1[i][j]);
	 }
     }
     clrscr();
     for(i=0;i<3;i++)
     {
	   for(j=0;j<3;j++)
	       printf("%d\t",a1[i][j]);
	       printf("\n");
     }
     for(i=0;i<3;i++)
     {
	   for(j=0;j<3;j++)
	   {
	       printf("Enter the value for a2[%d][%d]:",i,j);
	       scanf("%d",&a2[i][j]);
	   }
     }
     clrscr();
     for(i=0;i<3;i++)
     {
	   for(j=0;j<3;j++)
	       printf("%d\t",a2[i][j]);
	       printf("\n");
     }
     if((a1[0][1]==0&&a1[0][2]==0&&a1[1][0]==0&&a1[1][2]==0&&a1[2][0]==0&&a1[2][2]==0))
     {

	       printf("\n matrix is not diagonal",i,j);
     }
     else
     {
	       printf("\n a1 matrix is digonal",i,j);
     }
     getch();
}