#include<stdio.h>

int main(){
    char input, end;
    float kmstomiles=0.621371  ;
    float kgtopounds=2.2046226  ;
    float cmtometer=0.01 ;
    float inchestofoot=0.08333  ;
    float inchestometers= 0.0254 ;
    float a,b;
    printf("types of conversion :-\n  q is for quiting\n  1 is for kmstomiles conversion\n  2 is for kgtopounds conversion\n  3 is for cmtometer conversion\n  4 is for inchestofoot conversion\n  5 is for inchestometers conversion\n\n");

    printf("Enter the type of conversion:\n");
    scanf("%c",&input);


    switch(input){


        case'q':
        printf("quiting the program");
        goto end ;
        break;

         case'1':
         
           printf("Enter the value of a\n");
           scanf("%f",&a);
           b=a*kmstomiles;    
        printf("%f km is %f miles:\n",a,b);
        break;        

         case'2':
                    
           printf("Enter the value of a\n");
           scanf("%f",&a);
           b=a*kgtopounds;
        printf("%f kg is %f pounds :\n",a,b);
        break;

         case'3':
                  
           printf("Enter the value of a\n");
           scanf("%f",&a);
            b=a*cmtometer; 
        printf("%f cm is %f meter :\n",a,b);
        break;        

         case'4':
                   
           printf("Enter the value of a\n");
           scanf("%f",&a);
            b=a*inchestofoot;
        printf("%f inches is %f foot :\n",a,b);
        break;        

         case'5':
                   
           printf("Enter the value of a\n");
           scanf("%f",&a);
            b=a*inchestometers;
        printf("%f inches is %f meters :\n",a,b);
        break;        

         default:
        
        break;        
    }

    
end:
    return 0;
}