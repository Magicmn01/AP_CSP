#include <stdio.h> 
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int grades[] = {99, 84, 65, 96, 81, 35};
    printf("%d\n", grades[2]);
    grades[2] = 85;
    printf("%d\n", grades[2]);
    




    float distance[] = {72.12, 74.2, 69.2, 48.93};


    char names[][50] = {"john", "odin", "tonya", "marcos"};
    printf("%s\n", names[3]);




    int grade_len = sizeof(grades)/sizeof(grades[1]);

    for(int index = 0; index < grade_len; index++){
        printf("%d\n", grades[index] + 5);
    }

    srand(time(NULL));
    int goose = rand() %15 + 1;
    for (int count = 1; count < goose; count++){
        printf("duck\n");
    }
    printf("goose\n");





    return 0;
}