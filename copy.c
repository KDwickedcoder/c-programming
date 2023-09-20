#include <stdio.h>
void swap(int *n1, int *n2);
 
int main(){
int num1 = 5, num2 = 10;
int *ptr1 = &num1;
int *ptr2 = &num2;
// address of num1 and num2 is passed to the swap function through pointers ptr1 and ptr2
printf("Before swapping \n");
printf("Number1 = %d\n", num1);
printf("Number2 = %d\n", num2);
 
swap( ptr1, ptr2);
 
printf("After swapping \n");
printf("Number1 = %d\n", num1);
printf("Number2 = %d", num2);
return 0;
}
 
void swap(int * n1, int * n2){
// pointers n1 and n2 points to the address of num1 and num2 respectively
int temp;
temp = *n1;
*n1 = *n2;
*n2 = temp;
}