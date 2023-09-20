#include<stdio.h>
#include<math.h>

int main(){
    int i,term=1,num,y=0;
    int x;
    float m,sum=0.0,fct=1;
    printf("enter the num:\n");
    scanf("%d",&num);
    printf("enter the x:\n");
    scanf("%d",&x);
    for(i=1;i<=num;i++){
       
        m=term*pow(x,y)/fct;
        term=term*(-1);
         fct=fct*i;
        sum=sum+m;
        y++;

    }
    printf("the series answer is %.4f",sum);

    return 0;
}