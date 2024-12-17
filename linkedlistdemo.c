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
void search();
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
    printf("\nINSERT AS\n1.FIRST NODE\n2.LAST NODE\n3.BETWEEN FIRST AND LAST NODES\nSelect your choice : ");
    scanf("%d",&ch);
    switch(ch) {
        case 1:
        temp->next=head;
        head=temp;
        break;
        case 2:
        last->next=temp;
        last=temp;
        break;
        case 3:
        printf("Enter the position to insert : ");
        scanf("%d",&pos);
        printf("pos:%d,count=%d",pos,count);
        while(count!=pos) {
            prev=cur;
            cur=cur->next;
            count++;
        }
        if(count==pos) {
            prev->next=temp;
            temp->next=cur;
        }
        else {
            printf("Unable to insert");
        }
        break;
    }
}
void delete() {
    struct node *prev=NULL,*cur=head;
    int count=1,ch,pos;
    printf("DELETE\n1.FIRST NODE\n2.LAST NODE\n3.BETWEEN FIRST AND LAST NODES\nSelect your choice : ");
    scanf("%d",&ch);
    switch(ch) {
        case 1:
        if(head!=NULL) {
            printf("The deleted element is %d",head->data);
            head=head->next;
        }
        else {
            printf("Unable to delete");
        }
        break;
        case 2: 
        if(head==NULL){
            printf("Unable to delete");
        }
        else {
            while(cur!=last) {
                prev=cur;
                cur=cur->next;
            }
            if(cur==last) {
                printf("Deleted element is %d",cur->data);
                prev->next=NULL;
                last=prev;
            }
        }
        break;
        case 3:
        printf("Enter teh position to delete : ");
        scanf("%d",&pos);
        if(head==NULL) {
            printf("Unable to delete");
        }
        else {
            while(count!=pos) {
                prev=cur;
                cur=cur->next;
                count++;
            }
            if(count==pos) {
                printf("Deleted element is %d",cur->data);
                prev->next=cur->next;
            }
        }
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
            printf("->");
        }
    }
}
void search() {
    int value,pos=0;
    int flag=0;
    if(head==NULL) {
        printf("List is empty");
        return;
    }
    printf("Enter the value to be searched : ");
    scanf("%d",&value);
    struct node *temp;
    temp=head;
    while(temp!=NULL) {
        pos++;
        if(temp->data==value) {
            flag=1;
            printf("Element %d is found at %d position",value,pos);
            return;
        }
        temp=temp->next;
    }
    if(!flag) {
        printf("Element %d is not found",value);
    }
}
int main() {
    int ch;
    while(1) {
        printf("\n****MENU****");
        printf("\n1.CREATE\n2.INSERT\n3.DELETE\n4.SEARCH\n5.DISPLAY\n6.EXIT\n\nEnter your choice : ");
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
            search();
            break;
            case 5:
            display();
            break;
            case 6:
            return 0;
            default:
            printf("\nInvalid choice, please try again");
            break;
        }
    }
    return 0;
}