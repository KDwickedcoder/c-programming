#include<stdio.h>
void printstd(char std[]){
    int i=0;
    while(std[i]!=0){
        printf("%c",std[i]);
        i++;
    }
    
}
int main(){
    char std[] ={'K','a','r','a','n','\0'};
    char str[6] = "karan";
   //printf("%s\n\n",std);
  // printstd(std);

   //printf("%s",str);
  // gets(std);
  // printf(str);
  printf("using printf:%s\n",std);
  printf("using puts:");
   puts(std);
    return 0;
}