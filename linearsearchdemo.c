#include<stdio.h>
int main() {
    int a[50],n,i,element,temp;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter %d array elements : ",n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter an element to search : ");
    scanf("%d",&element);
    for(i=0;i<n;i++) {
        if(a[i]==element) {
            temp=1;
            printf("Element found at %d\n",i+1);
            break;
        }
    }
    if(temp!=1) {
            printf("Element not found");
        }
    return 0;
}