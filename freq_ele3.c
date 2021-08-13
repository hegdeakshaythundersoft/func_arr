/*3 Write a C program to count frequency of each element in an array.*/
#include <stdio.h>
#define arr_size 10
static int f,s;
int freq(int*,int);
int main()
{
    int num[arr_size]={1,2,3,5,4,4,9,7,0,8},ele;
    printf("enter the frequent element\n");
    scanf("%d",&ele);
    printf("%d is repeated\t%d times\n",ele,freq(num+10,ele));
    return 0;
}
int freq(int *p,int e){
    if(s==arr_size-1)
    return f;
    else if(*p==e)
    f++;
    s++;
    freq(p-s,e);
    
}