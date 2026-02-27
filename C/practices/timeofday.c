//AP conditonals
#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

int main(){
    
    int time;

    printf("what is the military time? \n");
    scanf("%d", &time);

    if (time > 5 && time < 11){
        printf("Have a wonderful morning ;)");
    } else if (time > 11 && time < 16){
        printf("good afternoon");
    } else if (time > 16 && time < 20){
        printf("Have a good nights rest");
    } else{
        printf("GO TO BED!!!!!!");
    }








    return 0;
}
