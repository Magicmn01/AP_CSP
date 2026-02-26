//AP conditonals
#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

int main(){
    int grade = 97; 
    bool isprogramming = true;

    if (grade > 90){
            printf("your garde is %d percent, that is A\n", grade);
    }else if (grade > 80){
            printf("your garde is %d percent, that is B\n", grade);
    }else if (grade > 70){
            printf("your garde is %d percent, that is C\n", grade);
    }else if (grade > 60){
            printf("your garde is %d percent, that is D\n", grade);
    }else{
            printf("your garde is %d percent, that is F\n", grade);
    }




    int num = 4;

    if (num < 10 && num > -10){
        printf("your number is %d, that is a single digit number\n", num);
    }else if (num < 100 && num > -100){
        printf("your number is %d, that is a double digit number\n", num);
    }else if (num < 1000 && num > -1000){
        printf("your number is %d, that is a triple digit number\n", num);
    }else if (num < 10000 && num > -10000){
        printf("your number is %d, that is a quadruple digit number\n", num);
    }else{
        printf("your number is %d, that is a big number\n", num);
    }


    char name[] = "ran";

    if(strcmp(name, "ryan")==0){
        printf("welcome admin!");
    }else{
        printf("inturder");
    }





    return 0;
}