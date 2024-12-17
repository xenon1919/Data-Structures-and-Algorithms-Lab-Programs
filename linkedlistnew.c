#include<stdio.h>
#include<stdlib.h>
 struct node {
        int data;
        struct node* link;
    };
void display(struct node *p) {
    while(p!=NULL) {
        printf(" %d \t",p->data);
        p=p->link;
    }
}
int main() {
    struct node* head;
    struct node* first;
    struct node* second;
    struct node* third;
    head= (struct node*)malloc(sizeof(struct node));
    first= (struct node*)malloc(sizeof(struct node));
    second= (struct node*)malloc(sizeof(struct node));
    third= (struct node*)malloc(sizeof(struct node));
    head->data=5;
    head->link=first;
    first->data=10;
    first->link=second;
    second->data=20;
    second->link=third;
    third->data=30;
    third->link=NULL;
    display(head);
    return 0;
}
