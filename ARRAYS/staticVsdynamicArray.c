#include<stdio.h>
#include<stdlib.h>
int main() {
    int A[5]={2,3,4,5,3};
    int *p;
    p=(int *)malloc(5*sizeof(int));
    p[0]=3;
    p[1]=7;
    p[2]=5;
    p[3]=9;
    p[4]=22;
    for(int i=0;i<5;i++) {
        printf("%d ",A[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++) {
        printf("%d ",p[i]);
    }
    return 0;
}