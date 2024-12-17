#include <iostream>
using namespace std;
int main() {
    int A[5];
    A[0]=10;
    A[1]=11;
    A[2]=13;
    A[3]=14;
    A[4]=15;
    cout<<sizeof(A)<<endl;
    cout<<A[0]<<endl;
    printf("%d\n",A[1]);
    int B[5]={1,2,3,4,5};
    for(int i=0;i<5;i++) {
        cout<<B[i]<<endl;
    }
    for(int x:A) {
        cout<<x<<endl;
    }
    return 0;
}
