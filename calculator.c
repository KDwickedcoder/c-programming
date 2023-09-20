#include<stdio.h>
#include<math.h>
float add(float a,float b){
return a+b;}

float subtract(float a,float b){
    return a-b;
}

float multiply(float a,float b){
    return a*b;
}

float divide(float a,float b){
    return a/b;
}
void swap(float *a, float *b);

int main(){
    start:
    float x,z; int ch,bab; char  y,n;
    printf("Enter the first number:");
    scanf("%f",&x);

    printf("Enter the second number:");
    scanf("%f",&z);

    if(x<z){
        swap(&x,&z);
        printf("number are %f, %f\n\n",x,z);
    }

    add(x,z);
    subtract(x,z);
    multiply(x,z);
    divide(x,z);

    printf("the operation you seek:\n\n");

    printf("  for addition press 0,\n  for substraction press 1, \n  for multiplication press 2,\n  for division press 3,\n\n ");
    printf("Enter the operation:\n");
    scanf("%d",&bab);
    

    switch(bab){

        case 0: printf("addition of given numbers is %f\n", add(x,z));
        break;

         case 1: printf("subtraction of given numbers is %f\n", subtract(x,z));
        break;

         case 2: printf("multiplication of given numbers is %f\n", multiply(x,z));
        break;

         case 3: printf("divsion of given numbers is %f\n", divide(x,z));
        break;

         default: printf("wrong operation input\n");
            
    }
    
        printf("Do you want to continue (yes[4]/no[5]):\n");
        scanf("%d",&ch);


    switch(ch){

        case 4: 
        printf("new entry\n");
        goto start;
       break;

        case 5: 
        printf("THANK YOU !! \n");
       break;

       
    }


    return 0;
}
void swap(float * a, float * b){
    float temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
