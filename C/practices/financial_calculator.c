//AP 6 financial calculator
#include <stdio.h> 
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

float mon(char* bill){
    float user_expense;
    printf("Tell me your monthly %s\n", bill);
    scanf("%f", &user_expense);
    return user_expense;
}
float calc(float money, float inco){
    float percent = money/inco*100;
}





int main(){
    float income = mon("income: ");
    float rent = mon("rent: ");
    float util = mon("utilities: ");
    float grocer = mon("grocerices: ");
    float transport = mon("transportation: ");
    float saving = income*.15;

    printf("Your rent is %.2f$, and that is %.2f percent of your income\n", rent , calc(rent, income));
     printf("Your rent is %.2f$, and that is %.2f percent of your income\n", rent , calc(rent, income));
      printf("Your rent is %.2f$, and that is %.2f percent of your income\n", rent , calc(rent, income));
      
    printf("You should save 15 percent of your income which is %.2f$\n", saving);
    printf("You have %.2f dolllars left \n", income-saving-rent-util-grocer-transport);
    return 0;
}