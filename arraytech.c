#include<stdio.h>
void insertion();
int main()
{
    int a[100],n,i,pos,element;
    printf("Enter number of elements in the Array :\n");
    scanf("%d",&n);
    printf("Enter %d Array elements : \n ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    insertion();
    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    


}
void insertion() {
    int a[100],n,i,pos,element;
    printf("Enter the position where element is to be inserted : \n");
    scanf("%d",&pos);
    printf("Enter the element which is to be inserted : \n");
    scanf("%d",&element);
    for(i=(n-1);i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    
    a[pos]=element;
    
}