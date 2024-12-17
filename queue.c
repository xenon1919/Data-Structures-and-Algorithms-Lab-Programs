#include<stdio.h>
#include<stdlib.h>
int front=-1;
int i;
int rear=-1;
int q[5];
int isEmpty() {
    if(front==-1 && rear==-1) {
        return 1;
    }
    else {
        return 0;
    }
}
int isFull() {
    if(rear==4) {
        return 1;
    }
    else {
        return 0;
    }
}
void enqueue(int value) {
    if(isFull()) {
        printf("Queue is full");
        return;
    }
    else if(isEmpty()) {
        rear=0;
        front=0;
    }
    else {
        rear++;
    }
    q[rear]=value;
}
void dequeue() {
    if(isEmpty()) {
        printf("Queue is empty");
    }
    else if(front==rear) {
        printf("Dequeued value : %d" , q[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        ("Dequeued value : %d", q[front]);
    front++;
    }
}
int count() {
    if(rear==-1 && front==-1) {
        return 0;
    }
    else {
        return(rear-front+1);
    }
}
void display() {
    if(isEmpty()) {
        printf("Queue is empty");
    }
    else {
        printf("All values of queue are : ");
        for(i=front;i<=rear;i++) {
            printf("%d ",q[i]);
        }
    }
}
int main() {
    int ch,value;
    do {
        printf("\n ****MENU****");
        printf("\nSelect an option \n1.Enqueue \n2.Dequeue\n3.isEmpty\n4.isFull\n5.Count\n6.Display\n7.Quit\n");
        scanf("%d",&ch);

        switch(ch) {
            case 1 : printf("Enter an item into the queue :");
            scanf("%d",&value);
            enqueue(value);
            break;
            case 2 : dequeue();
            break;
            case 3 : if(isEmpty()) {
                printf("Queue is empty");
            }
            else {
                printf("Queue is not empty");
            }
            break;
            case 4 : if(isFull()) {
                printf("Queue is full");
            }
            else {
                printf("Queue is not full");
            }
            break;
            case 5 : printf("Number of items in the queue : %d" ,count());
            break;
            case 6 : display();
            break;
            case 7 : exit(0);
            break;
            default : printf("Invalid option, please try again");
            break;
        }
    }
        while(ch!=0);
        return 0;
    }