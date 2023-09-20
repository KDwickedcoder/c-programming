#include<stdio.h>
int takenumber(){
    int i;
    printf("enter the value of number:\n"); 
    scanf("%d",&i);                                              // WA_R----> means without Argument with return Value
    return i;
}

int main(){
    int a;
    a=takenumber();
    printf("the number is %d\n", a);
    return 0;
}