#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="karan";
    char s2[]="rajnish";
    char s3[30];
    printf("the length of str1 is :%d\n",strlen(s1));
    printf("the length of str2 is :%d\n",strlen(s2));
    //puts(strcat(s1, s2));
    strcpy(s3, strcat(s1, s2));
    printf("\n");
    puts(s3);
    return 0;
}