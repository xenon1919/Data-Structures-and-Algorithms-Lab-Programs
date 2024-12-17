#include<stdio.h>
#include<stdlib.h>
int display(int arr[], int size) {
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 1;
}


int insertion(int arr[],int size,int element,int index) {
    printf("\nEnter the location where you want the element to be inserted :\n");
    scanf("%d",&index);
    printf("\nEnter the element which you want to insert :\n");
    scanf("%d",&element);
    int i;
    for(i=(size-1);i>=index;i--) {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
     for(int i=0;i<size+1;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 1;
}


int deletion(int arr[],int size, int index) {
    printf("\nEnter the location where the element is to be deleted\n");
    scanf("%d",&index);
    int i;
    for(i=index;i<=size-1;i++) {
        arr[i]=arr[i+1];
    }
     for(int i=0;i<size-1;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 1;
}


int main() {
    int arr[100],size,index,element,i,ch;
    printf("\nEnter the size of the Array :\n");
    scanf("%d",&size);
    printf("Enter %d elements :\n",size);
    for(i=0;i<size;i++) {
    scanf("%d",&arr[i]);
    }
    do {
    printf("\n   *****MENU*****");
    printf("\nChoose an Array operation :\n 1. Insertion \n 2. Deletion \n 3. Traversal \n 4. Quit\n");
    scanf("%d",&ch);
    switch(ch) {
        case 1 : insertion(arr,size,element,index);
        break;
        case 2 :  deletion(arr,size,index);
        break;
        case 3 : display(arr,size);
        break;
        case 4 : exit(0);
        break;
        default : printf("Invalid option entered, Please try again");
    }
    }while(ch!=0);
    return 0;
}
