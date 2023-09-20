#include<stdio.h>
#include<string.h>
struct student {
    char name[30];
    int marks;
    int roll_no;
    char fav_ch[20];
    };
    struct student karan, rajiv,shubham,ram,s;
        void print(){
            printf("the marks of student karan is:%d",karan.marks);
    }
int main(){
  struct student karan, rajiv,shubham,ram,s;
    karan.marks=90;
    rajiv.marks=45;
    shubham.marks=56;
    ram.marks=78;
    printf("the marks of ram is: %d\n",ram.marks);
    strcpy(ram.fav_ch, "harry potter ");
    strcpy(rajiv.fav_ch, "harry potter, ");
    strcpy(karan.fav_ch, "super man");
    printf("the favourite charcter of ram and karan is same :\n");
    puts(ram.fav_ch);
    //strcat(rajiv.fav_ch, karan.fav_ch);
    strcpy(s.fav_ch, strcat(rajiv.fav_ch,karan.fav_ch));
    printf("the concatination of favourite characters of rajiv and karan is:");
    puts(s.fav_ch);
    printf("\n");
    print();
    return 0;
}