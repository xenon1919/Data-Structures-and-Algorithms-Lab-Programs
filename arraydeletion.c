#include<sint deletion(int a[],int size, int index) {
    for(int i=index;i<=size-1;i++) {
        a[i]=a[i+1];
}
return 1;
}tdio.h>
void display(int a[],int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}


int main() {
    int a[100]={1,2,3,4,5};
    int size=5, index = 3;
    display(a, size);
    deletion(a,size,index);
    size-=1;
    display(a, size);
    return 0;

}