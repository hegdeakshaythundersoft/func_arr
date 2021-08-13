/*5.Write a C program to check whether a string is palindrome or not. */
#include <stdio.h>
int pal(char *,int);
int main()
{
   char arr[9]="malayalam",str[10]="softy";
  printf("%s is %s\n",arr,pal(arr,sizeof(arr)/sizeof(char)-1)?"palindrome":"non-palindrome");
   printf("%s is %s",str,pal(str,sizeof(str)/sizeof(char)-1)?"palindrome":"non-palindrome");
    return 0;
}
int pal(char *p,int j){
    int i=0;
   for(i=0;j>4;i++,j--){
       if(p[i]!=p[j]){
           return 0;
       break;
       }
      return 1;
   }
}
   