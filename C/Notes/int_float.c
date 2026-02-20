//AP integers and floats
#include <stdio.h>
#include <math.h>

int main(){
    int people = 11;
    int apple = 24;
    int room = 200;
    
    printf("%d, %d, %d\n", people, apple, room);
    printf("each person gets %d apples\n", (float) apple/people);
    const float pi = 3.14159;
    float money = 200.39;
    float gpa = 2.3;

    printf("%.5f, %.2f, %.1f\n", pi, money, gpa);
    printf("%d\n", (int) round(money));
    printf("%f is 2 to the power of .3\n", (int) pow(2,3));
    printf("%.3f\n", sqrt(10));

    return 0;
}