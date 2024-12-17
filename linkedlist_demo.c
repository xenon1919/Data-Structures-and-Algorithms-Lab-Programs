#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head=NULL, *last=NULL;
void create();
void insert();
void delete();
void display();
void create() {
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    int n;
    printf("Enter an element : ");
    scanf("%d",&n);
    temp->data=n;
    temp->next=NULL;
    if(head==NULL) {
        head=temp;
        last=head;
    }
    else {
        last->next=temp;
        last=temp;
    }
}
void insert() {
    struct node *prev, *cur, *temp;
    prev=NULL;
    cur=head;
    int count=1,pos,ch,n;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter an element : ");
    scanf("%d",&n);
    temp->data=n;
    temp->next=NULL;
    printf("Insert as\n1.First Node\n2.Last Node\n3.Between First & Last Nodes : ");
    scanf("%d",&ch);
    switch(ch) {
        case 1:
        temp->next=head;
        head=temp;
        break;
        case 2: 
        break;
        case 3:
        break;
    }
}
void delete() {
    struct node *prev=NULL, *cur=head;
    int count=1,pos,ch;
    printf("Delete as\n1.First Node\n2.Last Node\n3.Between First & Last Nodes\nEnter your choice");
    scanf("%d",&ch);
    switch(ch) {
        case 1:
        if(head!=NULL) {
            printf("Deleted element is %d",head->data);
            head=head->next;
        }
        else {
            printf("Unable to delete");
        }
        break;
        case 2:
        break;
        case 3:
        break;
    }
}
void display() {
    struct node *temp=head;
    if(temp==NULL) {
        printf("List is empty");
    }
    while(temp!=NULL) {
        printf("%d",temp->data);
        temp=temp->next;
        if(temp!=NULL) {
            printf("-->");
        }
    }
}
int main() {
    int ch;
    while(1) {
        printf("\n****MENU****\n1.Create\n2.Insert\n3.Delete\n4.Display\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch) {
            case 1:
            create();
            break;
            case 2:
            insert();
            break;
            case 3:
            delete();
            break;
            case 4:
            display();
            break;
            default:
            printf("Invalid option please try again");
        }
        

    }
    return 0;
}