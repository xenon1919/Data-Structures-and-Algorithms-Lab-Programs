#include<stdio.h>
int top=-1,a[5];
int isEmpty()
{
if(top==-1)
{
return 1;
}
else
{
return 0;
}
}
int isFull()
{
if(top==4)
{
return 1;
}
else
{
return 0;
}
}
void push(int item)
{
if(isFull())
{
printf("stack overflow");
}
else
{
top++;
a[top]=item;
}
}
void pop()
{
if(isEmpty())
{
printf("stack underflow");
}
else
{
printf("The popped element is %d",a[top]);
top--;
}
}
void display()
{
if(top>=0)
{
 printf("Elements in the stack are:");
for(int i=top;i>=0;i--)
{
printf("\n%d",a[i]);
}
}
else
{
printf("stack is empty");
}
}
void count()
{
printf("\nNumber of elements in the stack are: %d",top+1);
}
void peek() 
{
 if(top==-1)
{
 printf("stack is empty");
}
else
{
 printf("The top element is %d",a[top]); 
}
 }
void search()
{
int index;
if(top==-1)
{
 printf("stack is empty");
}
else
{
printf("Enter index number u want to display:"); 
scanf("%d",&index);
printf("\nthe value in the %d index is %d",index,a[index]);
}
}
void change()
{
int index,value;
if(top==-1)
{
 printf("stack is empty");
}
else
{
printf("enter the index number and value which u want to change:");
scanf("%d%d",&index,&value);
a[index]=value;
}
}
int main()
{
int ch,item,index,value;
do
{
printf("\n**** MENU ****");
 
printf("\n1:isEmpty()\n2:isFull()\n3:push()\n4:pop()\n5:count()\n6:display()\n7:peek()\n8:search()\n9:change()\n");
printf("\nEnter Your Choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: if(isEmpty())
printf("stack is empty\n");
else
printf("stack is not empty\n");
break;
case 2: if(isFull())
printf("stack is full\n");
else
printf("stack is not full\n");
break;
case 3: printf("enter an item to push:");
scanf("%d",&item);
push(item);
break;
case 4: pop();
break;
case 5: count();
break;
case 6: display();
break;
case 7: peek();
break;
case 8: search();
break;
case 9: change();
break;
default: printf("choose correct option");
}
}while(ch!=0);
}