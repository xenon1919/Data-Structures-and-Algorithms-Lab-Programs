#include<stdio.h>
void main()
{
    int a[50];
    int i, n=6, position;
    printf("Enter Array elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the location where you want to delete the element : \n");
    scanf("%d", &position);
    for(i=position;i<(n-1);i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<(n-1);i++)
    {
        printf("%d ", a[i]);
    }

}