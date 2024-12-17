#include<iostream>
using namespace std;
int main() {
    int a=10; //real name
    int &r=a; //alias name
    cout<<a<<endl;
    cout<<r<<endl;
    r=20;
    cout<<a<<endl;
    cout<<r<<endl;
    return 0;
}