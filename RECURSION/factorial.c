#include<stdio.h>
int fact(int n) {
    if(n==0) {
        return 1;
    }
    else {
        return fact(n-1)*n;
    }
}

int Ifact(int n) {
    int f=1;
    int i;
    for(i=1;i<=n;i++) {
        f=f*i;
    }
    return f;

}
int main() {
    
    printf("%d",Ifact(5));
    return 0;
}