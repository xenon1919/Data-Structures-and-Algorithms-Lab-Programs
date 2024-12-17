#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left, *right;
};
struct node *root=NULL;
int level=1;
void create() {
    if(root==NULL) {
        struct node *temp =(struct node*)malloc(sizeof(struct node));
        int value;
        printf("Enter a value : ");
        scanf("%d",&value);
        temp->data=value;
        temp->left=NULL;
        temp->right=NULL;
        root=temp;
        level=0;
    }
    else {
        printf("Tree already exists");
    }
}
void insert() {
    if(root==NULL) {
        printf("Root is null");
        printf("Create a tree to insert elements : ");
        create();
    }
    else {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        int value;
        printf("Enter a value to insert : ");
        scanf("%d",&value);
        temp->data=value;
        temp->left=NULL;
        temp->right=NULL;
         if(root->left==NULL || root->right==NULL) {
        if(root->left==NULL) {
            root->left= temp;
        }
        else if(root->right==NULL) {
            root->right=temp;
        }
        level=1;
    }
    else if(level==1 || level==2) {
        if((root->left)->left==NULL) {
            (root->left)->left= temp;
        }
        else if((root->left)->right==NULL) {
            (root->left)->right=temp;
        }
        else if((root->right)->left==NULL) {
            (root->right)->left=temp;    
        }
        else if((root->right)->right==NULL) {
            (root->right)->right=temp;
    }
    level=2;
    }
}
}
void preorder(struct node *temp) {
    if(temp!=NULL) {
        printf("%d",temp->data);
        if(temp->left)
        preorder(temp->left);
        if(temp->right)
        preorder(temp->right);
    }
    else {
        printf("Cannot display");
        return;
    }
}
void postorder(struct node *temp) {
    if(temp!=NULL) {
        if(temp->left) 
        postorder(temp->left);
        if(temp->right) 
        postorder(temp->right);
        printf("%d",temp->data);
    }
    else {
        printf("Cannot display ");
    }
}
void inorder(struct node *temp) {
    if(temp!=NULL) {
        printf("%d",temp->data);
        if(temp->left)
        inorder(temp->left);
        if(temp->right)
        inorder(temp->right);
    }
    else {
        printf("Cannot display");
    }
}
void delete(struct node *temp) {
    if(temp==NULL)
    return;
    delete(temp->left);
    delete(temp->right);
    printf("Deleting node : %d",temp->data);
    free(temp);
}
int main() {
    while(1) {
        printf("")
    }
}