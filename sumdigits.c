#include<stdio.h>
int sumdigits(int n){

    if(n==0)
        return 0;
    
    else 
    return (n%10+sumdigits(n/10));
}
int main(){
    int num,k;
    printf("enter the number ");
    scanf("%d",&num);
    k=sumdigits(num);
    printf("%d",k);
    return 0;
}