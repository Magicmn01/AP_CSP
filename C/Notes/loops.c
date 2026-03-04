#include <stdio.h> 
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


 int main(){
    int i = 1; 
    while(i <= 10){
        printf("%d\n", i);
        i++; //increases i by 1
    }

    srand(time(NULL));
    printf("%d\n", rand() % 11);
    printf("%d\n", (rand() % 10) +1);
    printf("%d\n", rand());

    int goose = rand() % 10 + 1;
    int count = 1; 
    
    while (count < goose){
        printf("duck\n");
        count++;
    }
    printf("GOOSE!");


    int num = rand() % 20 + 1;

    while (true){
        int guess; 
        printf("guess number between 1 and 20: ");
        scanf("%d", &guess);
        if(guess==num){
            printf("you win!\n");
            break;
        }else if(guess > num){
            printf("guess lower\n");
        }else{
            printf("gues higher\n");
        }

    }
    for(int i = 20; i >= 0; i--){
    printf("%d ", i);
}
    

    return 0;
 }