#include<stdio.h>
void starpattern(int rows){
    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

void reversestarpattern(int rows){
     for(int i=0;i<rows;i++){
        for(int j=0;j<=rows-i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}

void trianglepyramid(int rows){
     for(int i=0;i<=rows;i++){
        for(int space=0;space<=rows-i;space++){
            printf(" ");
        }
        for(int j=1;j<=(2*i)-1;j++){
            printf("*");
        }
        printf("\n");
}
}
int main(){
    int rows,type;

    printf("Enter the number of rows required:\n");
    scanf("%d",&rows);

    printf("Enter the type of pattern 0 for star pattern, 1 for reveresestarpattern and 2 for pyramidstarpattern:\n");
    scanf("%d",&type);

    switch(type){

        case 0:
        starpattern(rows);
        break;

        case 1:
        reversestarpattern(rows);
        break;

         case 2:
        trianglepyramid(rows);
        break;

        default:
        break;
    }   
    return 0;
}