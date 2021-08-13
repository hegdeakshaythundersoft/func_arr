/*6.Write a C program to find first occurrence of a word in a given string.*/
#include<stdio.h>
void word(char*);
int main(){
    char str[100]="assignment should be done on time";
   word(str);
    return 0;
}
void word(char *p){
    
    register int i=0,j=0;
    while(p[i]!='\0'){
        if(p[i]==' '){/*till space gets the string i.e the first word*/
        j=i;
        for(i=0;i<=j;i++)
        printf("%c",p[i]);
         break;   
        }
        i++;
    } 
    
}