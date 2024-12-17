#include<stdio.h>
int main() {
    int A[5];
    int B[]={1,2,3,4,5};
    int C[3]={1,2,3};
    int D[5]={1,4,5};
    int E[3]={0};
    for(int i=0;i<5;i++) {
        printf("%d ",B[i]);
    }
    return 0;
}