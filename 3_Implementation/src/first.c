#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<fun.h>
int main(){
    printf("\t\tWelcome to the eLibrary of LTTs\n");
    int key;
    printf("\nEnter 0 for Cerate Account or continue with 1\n");
    scanf("%d",&key);
    if(key==0){
        create_account();
    }
    else{
        Login();

    }

    return 0;
}
void create_account(void){
    char name[15];
    char  id[10];
    char password1[10];
    char password2[10];
    printf("Enter Your Name\n");
    scanf("%s",name);
    printf("Enter Your SFID\n");
    scanf("%s",id);
    printf("Type Your New Password\n");
    scanf("%s",password1);
    printf("Retype Your Password\n");
    scanf("%s",password2);
    if(strlen(password1)!=strlen(password2)){
        printf("Plz Retype Your passsword\n");
        scanf("%s",password2);
    }
    else{
          printf("Wow! %s Your account has been created\n",name);
          printf("Thankyou for using our System\n");
    }
}
void Login(void){
    printf("Enter Your Name\n");
    char name_2[10];
    scanf("%s",name_2);
    printf("Enter Your SFID\n");
    char id_2[10];
    scanf("%s",id_2);
    printf("Enter Your Password\n");
    char password_3[10];
    scanf("%s",password_3);
    printf("You have Successfully Logged In\n");
    choose_book();
}
int libraryFine(int day1, int month1, int year1, int day2, int month2, int year2,int no_of_book) {
int fine;
if(year1<year2){
    fine=0;
}
else if(year1>year2){
    fine=1000*(no_of_book);
}
else{
    if(month1<month2){
        fine=0;
    }
    else if(month1==month2){
        if(day1<=day2){
                fine=0;
        }
        else{
                fine=no_of_book*(15*(day1-day2));
        }
        }
    else{
            fine=no_of_book*(500*(month1-month2));
        }
    }
return fine;
}
void choose_book(void){
    printf("You can choose three maximum no of Book\n\t No of Book You want?\n");
    int no_of_book;
    scanf("%d",&no_of_book);
    printf("Please Select the Book of Your Choise\n");
}