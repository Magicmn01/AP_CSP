//AP strings notes
#include <stdio.h> 
#include <string.h>
int main(){
    char subject[] = "computer sicence principles";
    char fruit[] = "grape";
    char book[50];

    printf("subject: %s\nfruit: %s\n", subject, fruit);
    
    printf("what is your favorite book: ");
    //scanf("%S", &book);
    fgets(book, sizeof(book), stdin);

    printf("your book is %s\n", book);

    
    char frist[] = "atticus";
    char last[] = "pereyra";
    strcat(frist, last);

    printf("%s\n", frist);

    char alpha[30];
    strcat(alpha, "abcdefghijklmnopqrstuvwxyz");
    printf("%s\n", alpha);

    printf("%lu\n", strlen(frist));

    return 0;
}