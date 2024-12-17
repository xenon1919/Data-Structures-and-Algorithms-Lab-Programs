#include<stdio.h>
int main()
{
int a[50][50],r,c,i,j;
printf("Enter the no. of rows and columns of matrix:");
scanf("%d%d",&r,&c);
printf("Enter Sparse Matrix:\n ");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("a[%d][%d]:",i,j);
scanf("%d",&a[i][j]);
}
}
printf("\nPrinting the Sparse Matrix:"); 
 for(i=0;i<r;i++) 
 { 
 printf("\n"); 
 for (j=0;j<c;j++) 
 { 
 printf("%d\t",a[i][j]); 
 } 
 } 
printf("\nThe 3 tuple represenation of the sparse matrix: ");
printf("\nR C V");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j]!=0)
{
printf("\n%d %d %d",i,j,a[i][j]);
}
}
}
printf("\n");
return 0;
}