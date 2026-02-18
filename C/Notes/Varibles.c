// This is how you write comments in C!
#include <stdio.h> 

int main(){
    int number = 8;
    float pi = 3.14;
    char grade = 'a'; //single for single character
    char name[] = "jake"; //string use [] after naming variable

    printf("working!\n");
    printf("%d\n", number);
    printf("the digit of pi are: %f\n", pi);
    printf("your name is %s you are %d old. you have an %c in programming. Pi is %f\n", name, number, grade, pi);
    return 0;
}