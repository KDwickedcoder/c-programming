#include<stdio.h>
int i;
void printstar(int n ){
    for(i=0;i<n;i++){
        printf("%c", '*');                                 // A_WR----> means Argument without Return Value
    }
}
int main(){
    printstar(8);
    return 0;
}