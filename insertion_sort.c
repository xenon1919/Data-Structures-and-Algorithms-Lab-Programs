#include<stdio.h>
int main() {
    int a[20],key,i,j,n;
    printf("Enter size of the list : ");
    scanf("%d",&n);
    printf("Enter %d elements to the list : ",n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++) {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key) {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
    printf("Elements after sorting the list are : ");
    for(i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    return 0;
}