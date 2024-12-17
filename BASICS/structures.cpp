#include<iostream>
using namespace std;
struct rectangle {
    int length; //4 bytes
    int breadth; //4 bytes
    char x;  //4 bytes are allocated but only 1 byte is used
};
// struct rectangle {
//     int length;
//     int breadth;
// } r1,r2,r2;
int main() { 
    struct rectangle r1={10,5};
    printf("%lu\n",sizeof(r1));
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    r1.length=15;
    r1.breadth=20;
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    return 0;
}