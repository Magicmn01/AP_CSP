// This is how you write comments in C!
#include <stdio.h> 

int main(){
    int number = 8;
    const float pi = 3.14;
    char grade = 'A'; //single for single character
    char name[] = "jake"; //string use [] after naming variable
    char user[50];

    printf("Tell me your name\n");
    scanf("%s", &user);


    printf("How old are you:\n");
    scanf("%d", &number);



    printf("working!\n");
    printf("%d\n", number);
    printf("the digit of pi are: %f\n", pi);
    printf("Your name is %s you are %d years old. You have an %c in programming. Pi is %f\n", user, number, grade, pi);
    return 0;
}