//AP 6 financial calculator
#include <stdio.h> 

int main(){
    float income;
    float rent;
    float util;
    float grocer;
    float transport;
   
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

    printf("your rent is %.2f$, and that is %.2f percent of your income\n", rent , 100*(rent/income));
    printf("your utilities is %.2f$, and that is %.2f percent of your income\n", util , 100*(util/income));
    printf("your groceries is %.2f$, and that is %.2f percent of your income\n", grocer , 100*(grocer/income));
    printf("your transportation is %.2f$, and that is %.2f percent of your income\n", transport , 100*(transport/income));
    printf("you have %.2f dolllars left \n", income-rent-util-grocer-transport);
    printf("you should save 15 percent");



    return 0;
}