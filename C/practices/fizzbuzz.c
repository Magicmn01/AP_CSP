#include <stdio.h> 
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


 int main(){
    int i = 1; 
    while (i <= 51){
        if (i%3 == 0 && i%5 == 0){
            printf("fizzbuzz");
        }else if (i%3 == 0){
            printf("fizz");
        }else if (i%5 == 0){
            printf("buzz");
        }else{
            printf("%d\n", i);
        } 
        while(i <= 51){
        printf("%d\n", i);
        i++; //increases i by 1
        }
    }
    
    return 0;
}