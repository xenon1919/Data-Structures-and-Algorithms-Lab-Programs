#include<stdio.h>
#include<string.h>
int main()
{
char a[30],b[30],c[30];
printf("Enter the first String:");
scanf("%s",a);
printf("Enter the second String:");
scanf("%s",b);
printf("Enter the third Sring:");
scanf("%s",c);
printf("\nEntered String is %s",a);
printf("\nEntered String is %s",b);
printf("\nEntered String is %s",c);
int length=strlen(a);
printf("\nLength of the String is %d",length);
printf("\nAfter concatenation, the String is %s",strcat(a,b));
printf("\nAfter copy operation, the String is %s",strcpy(a,b));
printf("\nComparing the two strings are %d",strcmp(b,c));
return 0;
}
