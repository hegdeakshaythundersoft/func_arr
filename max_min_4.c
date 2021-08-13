/*4.Write a C program to find maximum and minimum element in an array. [ use any sorting algorithm along with time complexity details ] */#include <stdio.h>
#include<stdio.h>
void sort(int*);
int main()
{
    
 
    
    int a[]={8,1,9,6,7};/*declaration*/
    sort(a);
    
}  
 void sort(int *arr){
     
     
     int n=5, i, j, temp;
    for (i = 1 ; i <= n - 1; i++)/*insertion sort has O(n) in best case and O(n^2) in worst case*/
    {
	    j = i;/*worst case will be an array in descending oreder and fn is to make ascending*/
            while ( j > 0 && arr[j-1] > arr[j])
            {	        
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
               
            }
             
    }
    n--;
    printf("max=%d\tmin=%d\n",arr[n],arr[0]);
    return;
}
