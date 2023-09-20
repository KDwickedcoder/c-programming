#include<stdio.h>

int main(){
    int a,b,c ;
    float x1,x2,D ;
    printf("\n enter the value of a,b,c");
    scanf("%d %d %d", &a,&b,&c);
    D = (b*b-4*a*c);
    x1 = (-b+D)/2*a;
    x2 = (-b-D)/2*a;
    if(D>=0){
       printf(" \n the value of root1  = %f", x1);
       printf(" \n the value of root2  = %f", x2);
    }
    else{
        printf("the equation has no real roots \n");
    }
    return 0;
}