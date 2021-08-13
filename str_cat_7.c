/*7.Write a C program to concatenate two strings and find length of a new string.*/
#include<stdio.h>
static int i;
int cat_(char*,char*,char*);
int main(){
    char str1[20]="akshay",str2[14]=" hegde";
    char catstr[36];
    printf("%s\t len=%d\n",catstr,cat_(str1,str2,catstr));

    }
int cat_(char *p,char *q,char *s){
    if(*p!='\0'){
    *s=*p;
    i++;
    cat_(p+1,q,s+1);
    }
    else if(*q!='\0'){
    *s=*q;
    i++;
    cat_(p,q+1,s+1);
    }
    return i;
    
}