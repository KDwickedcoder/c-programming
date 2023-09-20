#include <stdio.h>
void swap(int *c,int *d);
int main(){
 int a,b;
   
    printf("enter a, b:\n");
    scanf("%d %d",&a, &b); 
     
        swap(&a,&b);
        printf("%d %d",a,b);
    
    

    return 0;
}
void swap(int *c,int *d){
    int temp;
    
        temp=*c;
        *c=*d;
        *d=temp;

        
}