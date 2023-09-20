#include<stdio.h>

int main(){
    int age , i ;
    for(i=0; i<10; i++){
        printf("%d\n enter your age:", i);
        scanf("%d",&age);


        if(age>10){
            continue;                                                 // continue<====>break
                                                                      // this switch is possible over here
        }
        printf("hello all of you\n");
    }
    return 0;
}