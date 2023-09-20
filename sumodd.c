#include<stdio.h>
int sumodd(int);
int main(){
    int n,k;
    printf("enter the number:");
    scanf("%d",&n);
    k=sumodd(n);
    printf("the sum is %d",k);
    return 0;
}

int sumodd(int num){

    int rem,s=0;
    while(num!=0){
    
    rem = num%10;
    if(rem %2!=0){    // if rem%2 ==0 it will print sum of even terms
        s=s+rem;
    }
    num=num/10;
    }
    return s;
}
