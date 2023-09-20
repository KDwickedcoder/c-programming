#include<stdio.h>
int fibonacci_iterative(int n){
   int a=0;
    int b=1;
    for (int i=0;i<n-1;i++){
    b=a+b;
    a=b-a;
    }
    return a;
}
int fibonacci_recursive(int n){

    if(n<=1){
        return n;
    }
    else{
        return (fibonacci_recursive(n-1)+fibonacci_recursive(n-2));
    }


}
int main(){
    int number,i,sum=0;
    
    printf("enter the number for the index:\t");
    scanf("%d",&number);
    //for(i=0;i<=number;i++){
    //printf("%d", fibonacci_iterative(i));}
    //printf("\n");
    for(i=0;i<number;i++){
    printf("%d", fibonacci_recursive(i));
    sum=sum+fibonacci_recursive(i);
    }
    printf("\n");
    printf("%d",sum);
    return 0;
}