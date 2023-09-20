#include<stdio.h>

int main(){
    int a;
    char b[100];
   

    printf("enter the character array:\n");
    gets(b);

    printf("the string is:\n");
    puts(b);

    printf("enter the number:\n");
    scanf("%d",&a);

    printf("%d",a);
    return 0;
}