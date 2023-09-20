#include<stdio.h>
struct student{
    char name[5];
    int roll;
    float marks;
};
int main(){
    struct student s[10];
    int i;
    printf("Enter the information of students:\n\n");

    for(i=0;i<10;i++){

        s[i].roll=i+1;
        printf("Roll number %d\n",s[i].roll);
        printf("Enter the name of student:\n");
        scanf("%s",&s[i].name);
        printf("Enter the marks of student:\n");
        scanf("%f",&s[i].marks);
        printf("\n");
    }

    
    return 0;
}