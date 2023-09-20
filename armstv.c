#include<stdio.h>

int main(){
    int num,count=1,rem, rep;
    while(count<=500){
        num=count;
        int sum=0;
        while(num!=0){
            rem=num%10;
            sum=sum+(rem*rem*rem);
            num=num/10;
        
        }
        if(count==sum){
            printf("%d\n",count);
        }
        count++;
    }
    return 0;
}