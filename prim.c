#include<stdio.h>

int main(){
    int n,i;
    for(n=1;n<=300;n++){
        for(i=2;i<=n/2;i++){
            if(n%i==0)
            break;
        }
        if(i>n/2 && n>1){
            printf("%d\n",n);
        }
    }
    return 0;
}