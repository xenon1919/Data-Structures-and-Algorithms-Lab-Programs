#include<stdio.h>
#include<stdlib.h>
struct node
{
int row;
int col;
int value;
struct node* next;
};
struct node *head=NULL,*last=NULL;
void display()
{
 struct node *temp=head;
 printf("\n");
 while(temp!=NULL)
 {
 printf("[%d,%d,%d,%p]",temp->row,temp->col,temp->value,temp->next);
temp=temp->next;
if(temp!=NULL)
{
printf("-->");
}
 }
}
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
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j]!=0)
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->row=i;
temp->col=j;
temp->value=a[i][j];
temp->next=NULL;
if(head==NULL)
{
head=temp;
last=head;
}
else
{
last->next=temp;
last=temp;
}
}
}
}
printf("\nThe linked list represenation of the sparse matrix: ");
display();
printf("\n");
return 0;
}
