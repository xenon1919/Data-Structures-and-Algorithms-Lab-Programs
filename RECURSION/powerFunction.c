#include<stdio.h>
int power(int m, int n) {
    if(n==0) {
        return 1;
    }
    return power(m,n-1)*m;
}

int powerFunc(int m, int n) {
    if(n==0) {
        return 1;
    }
    if(n%2==0) {
        return powerFunc(m*m,n/2);
    }
    else {
        return m*powerFunc(m*m,(n-1)/2);
    }
}
int main() {
    printf("%d",powerFunc(2,9));
    return 0;
}