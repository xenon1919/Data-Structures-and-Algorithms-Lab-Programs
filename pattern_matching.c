#include<stdio.h>
#include<string.h>
int match(char[],char[]);
int main() {
    char a[100],b[100];
    int pos;
    printf("Enter some text : \n ");
    gets(a);
    printf("Enter a string to find :\n");
    gets(b);
    pos=match(a,b);
    if(pos!=-1) {
        printf("Found at : %d",pos+1);
    }
    else {
        printf("Not found\n");
    }
    return 0;
}
int match(char text[],char pattern[]) {
    int c,d,e,tl,pl,pos=-1;
    tl=strlen(text);
    pl=strlen(pattern);
    if(pl>tl) {
        return -1;
    }
    for(c=0;c<=tl-pl;c++) {
        pos=e=c;
        for(d=0;d<pl;d++) {
            if(pattern[d]==text[e]) {
                e++;
            }
            else {
                break;
            }
        }
        if(d==pl) {
            return pos;
        }
    }
    return -1;
}