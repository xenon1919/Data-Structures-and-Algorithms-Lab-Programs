#include<stdio.h>
int main() {
    int a[30],n,i,j,min,temp;
    printf("Enter size of the list : ");
    scanf("%d",&n);
    printf("Enter %d elements to the list : ",n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++) {
        min=i;
        for(j=i+1;j<n;j++) {
            if(a[min]>a[j]) {
                min=j;
            }
        }
        if(min!=i) {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    printf("Elements after sorting the list are : ");
    for(i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    return 0;
}