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



int main(){
    add();
    add();
    add();
    add();
    add();

    printf("%d\n", m);








    return 0;
}