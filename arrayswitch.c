#include<stdio.h>
#include<math.h>
struct poly {
    float coeff;
    int exp;
};
struct poly a[50],b[50],c[50],d[50];
int main() {
    int i;
    int deg1, deg2;
    int k=0,l=0,m=0;
    printf("Enter the highest degree of polynomial 1 ");
    scanf("%d",&deg1);
    for(i=0;i<=deg1;i++) {
        printf("Enter the coefficient of x^%d",i);
        scanf("%f",&a[i].coeff);
        a[k++].exp=i;
    }
        printf("Enter the highest degree of polynomial 2");
        scanf("%d",&deg2);
        for(i=0;i<=deg2;i++) {
            printf("Enter the coefficient of x^%d",i);
            scanf("%f",&a[i].coeff);
            b[l++].exp=i;
    }
    printf("\nExpression 1 =%.1f",a[0].coeff);
    for(i=1;i<=deg1;i++) {
        printf("+%.1fx^%d",a[i].coeff,a[i].exp);
    }
    printf("\nExpression 2 =%.1f",b[0].coeff);
    for(i=1;i<=deg2;i++) {
    printf("+%.1f^%d",b[i].coeff,b[i].exp);
    }
    return 0;
}