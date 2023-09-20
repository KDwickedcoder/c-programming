#include<stdio.h>
 long  conversion(long  n){
    long  rem,sum=0,rep=0,i=1;
    while(n!=0){
    rem=n%2;
     if(n%2!=0){
      n=(n-1)/2;
    }
    else{
        n=n/2;
    }
    sum=sum*10+rem;
    //i=i*10;
   
    }
    while(sum!=0){
        rem=sum%10;
        rep=rep*10+rem;
        sum=sum/10;
    }
    return rep;
 
 }
int main(){
   
     int num;
    printf("enter the decimal number:\n");
    scanf("%d",&num);
    printf("the binary number is :%d",conversion(num));
    return 0;
}