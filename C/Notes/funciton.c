#include <stdio.h> 
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int m = 0;
void add(){
    m++;
}

float divide(int numone, int numtwo){
    return (float) numone/ numtwo;
}


void hi(char* name){
    printf("hi %s. welcome to your enternal suffering!!!!!!!! yay\n", name);
}

int main(){
    add();
    add();
    add();
    add();
    add();

    printf("%d\n", m);




    float quo = divide(8,4);
    printf("%.2f\n", quo);
    printf("%.2f\n", divide(75,2));


    hi("john");
    hi("alex");
    hi("odin");
    hi("jake");
    hi("adam");



    return 0;
}