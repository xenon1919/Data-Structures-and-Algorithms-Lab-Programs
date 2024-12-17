#include<stdio.h>
int main() {
    int a[50],i,n,high,mid,low,element,loc;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter %d array elements : ",n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter an element to be searched : ");
    scanf("%d",&element);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    if(a[mid]==element) {
        loc=mid;
    }
    while((low<=high)&&(a[mid]!=element)) {
        mid=(low+high)/2;
        if(a[mid]<element) {
            low=mid+1;
        }
        else if(a[mid]>element) {
            high=mid-1;
        }
        else {
            loc=mid;
        }
    }
    if(a[loc]==element) {
        printf("Element found at position %d",loc+1);
    }
    else {
        printf("Element not found ");
    }
}