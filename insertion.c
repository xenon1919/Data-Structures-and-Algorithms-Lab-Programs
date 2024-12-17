#include<stdio.h>
void main()
{
    int a[50];
    int i, position, element,n=5;
    printf("Enter Array elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the position where element is to be added : \n");
    scanf("%d", &position);
    printf("Enter the element to be added : \n");
    scanf("%d", &element);
    for(i=n-1;i>=position;i--)
    {
        a[i+1] = a[i];
    }
    a[position]=element;
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
}




