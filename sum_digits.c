#include<stdio.h>
int add(int n){
     int rem, sum=0;
      if(n==0){
            return 0;}
    while(n!=0){
       
        rem=n%10;
        sum=sum+rem;
        n=n/10;}
       if(n==1){
        return 1;
       }
            else{
            return sum;}
    
        }
int main(){
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    printf("the sum of digits of a number is:%d",add(num));
    return 0;
}