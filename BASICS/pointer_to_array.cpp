#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
    int A[5]={1,2,3,4,5};
    int *p;
    p=A; //need not to give &A coz A is the starting address
    //p=&A[0];
    // for(int i=0;i<5;i++) {
    //     cout<<A[i]<<endl;
    // }
    for(int i=0;i<5;i++) {
        cout<<p[i]<<endl; //using pointer variable also we can access the array
    }
    return 0;

}