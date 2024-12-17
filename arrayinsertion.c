#include<stdio.h>

void display(int arr[], int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int insertion(int arr[],int size,int element,int cap,int index) {
    if(size>=cap) {
        return -1;
    }
    for(int i=size-1;i>=index;i--) {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;

}
int main() {
    int arr[100] = {1, 3, 5, 9, 13, 21};
    int size=6, element=20, index=4;
    display(arr,size);
    insertion(arr,size,element,100,index);
    size=size+1;
    display(arr,size);
    return 0;

}