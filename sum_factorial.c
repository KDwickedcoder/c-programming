#include<stdio.h>

int main(){
    int n,i,fact=1,sum;
    printf("enter the last digit of the series:");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++){
        fact=fact*i;
        sum=sum+fact;

    }
    printf("the sum of series of %d is %d",n,sum);
    return 0;
}