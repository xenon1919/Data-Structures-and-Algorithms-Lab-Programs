#include<iostream>
using namespace std;
struct rectangle {
    int length; 
    int breadth; 
};
//Call by value
// void fun(struct rectangle r) {
//     r.length=20;
//     cout<<"Length "<<r.length<<endl<<"Breadth "<<r.breadth<<endl;
// }
 void fun(struct rectangle *p) {
   p->length=20;
    cout<<"Length "<<p->length<<endl<<"Breadth "<<p->breadth<<endl;
     }

int main() { 
    struct rectangle r={10,5};
    fun(&r);
    printf("Length %d\n Breadth %d\n",r.length,r.breadth);
    return 0;
}