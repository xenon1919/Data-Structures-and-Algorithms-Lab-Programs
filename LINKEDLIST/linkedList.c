#include <stdio.h> 
#include <stdlib.h>
#include <stdint.h>

struct Node {
    int data;
    struct Node *next;
} *first = NULL;

void Create(int A[], int n) {
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i = 1; i < n; i++) {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p) {
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}

void RDisplay(struct Node *p) {
    if(p != NULL) {
        printf("%d ", p->data);
        RDisplay(p->next);
    }
}

int Count(struct Node *p) {
    int l = 0;
    while(p) {
        l++;
        p = p->next;
    }
    return l;

}

int RCount(struct Node *p) {
    if(p != NULL) {
        return RCount(p->next) + 1;
    } else {
        return 0;
    }

}

int Sum(struct Node *p) {
    int s = 0;
    while(p) {
        s += p->data;
        p = p->next;
    }
    return s;

}

int RSum(struct Node *p) {
    if(p != NULL) {
        return RSum(p->next) + p->data;
    } else {
        return 0;
    }
}

int Max(struct Node *p) {
    int max = INT32_MIN;
    while(p) {
        if(p->data > max) {
            max = p->data;
        }
        p = p->next;
    }
    return max; // Return the maximum value
}

int RMax(struct Node *p) {
    int x = 0;
    if(p == 0) {
        return INT32_MIN;
    }
    x = RMax(p->next);
    return x > p->data ? x : p->data;

}

struct Node * LSearch(struct Node *p,int key ) {
    struct Node *q;
    while(p != NULL) {
        if(key == p->data) {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;

}

struct Node * RSearch(struct Node *p, int key) {
    if(p == NULL) {
        return NULL;
    }
    if(key == p->data) {
        return p;
    }
    return RSearch(p->next, key);

}

void Insert(struct Node *p,int index, int x) {
    struct Node *t;
    if(index < 0 || index > Count(p)) {
        return;
    }
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    if(index == 0) {
        t->next = first;
        first = t;
    } else {
        for(int i = 0; i < index - 1; i++) {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }

}

void SortedInsert(struct Node *p, int x) {
    struct Node *t, *q = NULL;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;
    if(first == NULL) {
        first = t;
    } else {
        while(p && p->data < x) {
            q = p;
            p = p->next;
        }
        if(p == first) {
            t->next = first;
            first = t;
        } else {
            t->next = q->next;
            q->next = t;
        }
    }
 
}


void Delete(struct Node *p, int index) {
    struct Node *q;
    int x=-1;

    if(index<1 || index > count(p)) {
        return -1;
    }
    if(index == 1) {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    } else {
        for(int i = 0; i < index - 1; i++) {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
        return x;
    }

}

int isSorted(struct Node *p) {
    int x=-65536;
    while(p != NULL) {
        if(p->data < x) {
            return 0;
        }
        x = p->data;
        p = p->next;
    }
}


int RemoveDuplicate(struct Node *p) {
    struct Node *q = p->next;
    while(q != NULL) {
        if(p->data != q->data) {
            p = q;
            q = q->next;
        } else {
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }

}





int main() {

    struct Node *temp;
    int A[] = {10,30,40,50,60};
    Create(A, 5);



    // Insert(first,0, 10);
    
    // printf("Iterative display: ");
    // Display(first);
    
    // printf("\nRecursive display: ");
    // RDisplay(first);

    // printf("\nLength is %d ", Count(first));

    // printf("\nRLength is %d ", RCount(first));

    // printf("\nSum is %d ",Sum(first));
    
    // printf("\nRSum is %d ",RSum(first));

    // printf("\nMax is %d ",Max(first));

    // printf("\nRMax is %d ",RMax(first));

    // temp=RSearch(first,1);
    // if(temp) {
    //     printf("\nKey is found %d ",temp->data);
    // } else {
    //     printf("\nKey is not found");
    // }

    SortedInsert(first, 20);
    Display(first);
    

    
    
    return 0;
}
