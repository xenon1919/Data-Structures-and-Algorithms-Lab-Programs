#include<stdio.h>
int main()
{
    int a[100],i,n,element,found=0;
    printf("Enter the number of Array elements : \n");
    scanf("%d",&n);
    printf("Enter %d Array elements : \n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element you want to search : \n");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if(element==a[i])
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
    printf("The element is found at %d",i+1);
    }
    else
    {
    printf("The element is not found");
    }
    return 0;
    
}