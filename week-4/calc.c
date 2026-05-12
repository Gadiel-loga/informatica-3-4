#include <stdio.h>

void addition(void);
void subtraction(void);
void multiplication(void);
void division(void);

int main(void){
    printf("add \n");
    printf("sub \n");
    printf("mul \n");
    printf("div \n");
    printf("Enter your option: ");
    int user_response;
    scanf("%d", &user_response);

        if (user_response ==1){
    addition();
    }else if (user_response ==2){
    subtraction();
    }else if (user_response ==3){
    multiplication();
    }else if (user_response ==4){
    division();
    }else{printf("invalid option \n");}

void addition(void){
int a;
int b;
printf("Number 1: \n");
scanf("%d", &a);
printf("Number 2: \n");
scanf("%d", &b);
int Result = a + b;
printf("Result = %d\n", Result);
}
void subtraction(void){
int a;
int b;
printf("Number 1: \n");
scanf("%d", &a);
printf("Number 2: \n");
scanf("%d", &b);
int Result = a - b;
printf("Result = %d\n", Result);
}
void multiplication(void){
int a;
int b;
printf("Number 1: \n");
scanf("%d", &a);
printf("Number 2: \n");
scanf("%d", &b);
int Result = a * b;
printf("Result = %d\n", Result);
}
void division(void){
int a;
int b;
printf("Number 1: \n");
scanf("%d", &a);
printf("Number 2: \n");
scanf("%d", &b);
int Result = a / b;
printf("Result = %d\n", Result);
}
}
