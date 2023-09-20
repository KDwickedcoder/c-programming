#include<stdio.h>
int sum(int a, int b);
int main(){
    int a , b ,c ;
    a=12;
    b=3;                                                // A_R----> means Argument with Return Value
    c=sum(a,b);
    printf("%d",c);
    return 0;
}

int sum ( int a, int b){

return a+b;
}