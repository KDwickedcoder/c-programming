#include<stdio.h>

int main(){
    int num , i=0;
    printf("enter the value of num:");
    scanf("%d ",&num);
    do{  
        printf("%d",i);
        i = i+1;
    } while(i <= num);
    return 0;
}