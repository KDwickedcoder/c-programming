#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter the value of number :\n");
    scanf("%d\n",&a);

    printf("the table of %d is as follows:\n",a);

    for (b=1;b<=10;b++){
        c=a*b;
        printf("%d*%d=%d\n",a,b,c);
    }

    return 0;
}