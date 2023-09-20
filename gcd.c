#include<stdio.h>
 int hcf(int n1,int n2){
    int temp;
    while(n2!=0){
        temp=n2;
        n2=n1%n2;
        n1=temp;

    }
    return n1;
 }
int main(){
    int num1,num2;
    printf("enter 2 number:");
    scanf("%d %d",&num1,&num2);
    printf("the hcf is:%df",hcf(num1,num2));
    return 0;
}