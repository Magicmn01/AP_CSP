//AP 6 financial calculator
#include <stdio.h> 

int main(){
    float income;
    float rent;
    float util;
    float grocer;
    float transport;
    float saving = income*.15;
    printf("Tell me your monthly income\n");
    scanf("%f", &income);
    
    printf("Tell me your monthly rent\n");
    scanf("%f", &rent);
    
    printf("Tell me your monthly utilities\n");
    scanf("%f", &util);

    printf("Tell me your monthly groceries\n");
    scanf("%f", &grocer);

    printf("Tell me your monthly transportation\n");
    scanf("%f", &transport);

    printf("Your rent is %.2f$, and that is %.2f percent of your income\n", rent , 100*(rent/income));
    printf("Your utilities is %.2f$, and that is %.2f percent of your income\n", util , 100*(util/income));
    printf("Your groceries is %.2f$, and that is %.2f percent of your income\n", grocer , 100*(grocer/income));
    printf("Your transportation is %.2f$, and that is %.2f percent of your income\n", transport , 100*(transport/income));
    printf("You should save 15 percent of your income which is %.2f$\n", saving);
    printf("You have %.2f dolllars left \n", income-saving-rent-util-grocer-transport);
    return 0;
}