#include <stdio.h> 
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


 int main(){
     
    for (int n = 1; n <= 51; n++){
        if (n%3 == 0 && n%5 == 0){
            printf("fizzbuzz\n");
        }else if (n%5 == 0){
            printf("buzz\n");
        }else if (n%3 == 0){
            printf("fizz\n");
        }else{
            printf("%d\n", n);
        } 
    }
    return 0;
}