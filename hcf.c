#include<stdio.h>
int swap (int *a,int *b);
int hcf(int n1, int n2);
#include<math.h>
int main(){
    int n1,n2,k,j, temp;
    printf("enter the numbers");
    scanf("%d %d", &n1,&n2);
     temp=n2;
    n2=n1;
    n1=temp;
    printf("%d %d \n",n1,n2);
    k= hcf(n1,n2);
    printf("%d\n",k);
    return 0;
}


int hcf(int n1, int n2){
    

    if(n1%n2==0)
    return n2;
    else if (n1%(n1-n2)==0 && n2%(n1-n2)==0)
    return n1-n2; 
    else if(n1%((n1-n2)/2) ==0 && n2%((n1-n2)/2)==0)
    return (n1-n2)/2;
    else if(n1%((n1-n2)/4) ==0 && n2%((n1-n2)/4)==0)
    return (n1-n2)/4;
    else if((n1-n2)%3==0 && ((n1-n2)%6)==0)
    return 3;
    else if((n1-n2)%6==0)
    return 6;
    else 
    return 1;
}