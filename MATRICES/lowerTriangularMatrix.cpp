#include<iostream>
using namespace std;
class LowerTri {
    private:
    int *A;
    int n;
    
    public:
    LowerTri() {
        n = 2;
        A = new int[2*(2+1)/2];
    }
    LowerTri(int n) {
        this->n=n;
        A=new int[n*(n+1)/2];
    }
    ~LowerTri() {
        delete []A;
    }

    void Set(int i, int j, int x);
    int Get(int i,int j);
    void Display();

};

void LowerTri :: Set(int i, int j, int x){
    if(i>=j) {
        A[n*(j-1) - (j-2)*(j-1)/2 + i-j] = x;
    }
}

int LowerTri :: Get(int i, int j) {
    if(i>=j) {
        return A[n*(j-1) - (j-2)*(j-1)/2 + i-j];
    }
    return 0;
}

void LowerTri :: Display() {
    for(int i=1;i<n;i++) {
        for(int j=1;j<n;j++) {
            if(i>=j) {
                cout<<A[n*(j-1) - (j-2)*(j-1)/2 + i-j]<<" ";
            }
            else {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
int main() {
    int d;
    cout<<"Enter dimensions: ";
    cin>>d;
    LowerTri lm(d);

    int x;
    cout<<"Enter all elements";
    for(int i=1;i<=d;i++) {
        for(int j=1;j<=d;j++) {
            cin>>x;
            lm.Set(i,j,x);
        }
    }

    // LowerTri d(4);

    // d.Set(1,1,4);
    // d.Set(2,2,8);
    // d.Set(3,3,9);
    // d.Set(4,4,12);

    lm.Display();

    return 0;

}